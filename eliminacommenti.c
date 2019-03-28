/*elimina commenti*/    
/* stato NORMALE           a = "               stato SCRORRI
                                               stampa a
                           a = /               stato ASTERISCO
                           a = '               stato VIRGOLETTA
                                               stampa a 
                           a = altri caratteri stato stampa a

   stato SCORRI            a = "               stato NORMALE
                         stampa a 
                           a = altri caratteri stampa a

   stato VIRGOLETTA
                           a = /               stato STAMPA_VIRGOLETTA
                                               stampa a
                           a = *               stato NORMALE
                                               stampa a
                           a = altri caratteri stampa a

   stato STAMPA_VIRGOLETTA a = '               stampa a
                                               stato NORMALE

   stato ASTERISCO         a = *               stato elimina
                           a = altri caratteri stampa /
                                               stampa a 
                                               stato NORMALE
   stato ELIMINA           a = *               stato FINECOMMENTO

   stato FINECOMMENTO      a = /               stato = NORMALE
                           a = altri caratteri stato = ELIMINA*/
#include <stdio.h> 

int main ()
{
  enum stato {NORMALE, ASTERISCO, ELIMINA, FINECOMMENTO, SCORRI, VIRGOLETTA, STAMPA_VIRGOLETTA};
  char a;
  enum stato stato = NORMALE;

  while((a = getchar()) != EOF)
  {
      if(stato == NORMALE)
      {
          if(a == '"')  
          {
              stato = SCORRI;
              putchar(a);
          }
          else if(a == '/')  stato = ASTERISCO;
          else if(a == '\'')  
          {
              stato = VIRGOLETTA;
              putchar(a);
          }
          else   putchar(a);
      }
     
      else if(stato == SCORRI)
      {
          if(a == '"')  
          {
              stato = NORMALE;
              putchar(a);
          }
          else    putchar(a);
      }
      else if(stato == VIRGOLETTA)
      { 
          if(a == '/')
          {
              stato = STAMPA_VIRGOLETTA;
              putchar(a);
          }
          else if(a == '*')
          {
              stato = NORMALE;
              putchar(a);
          }
          else    putchar(a);
      } 
      else if(stato == STAMPA_VIRGOLETTA)
      {
          if(a == '\'')
          {
              putchar(a);
              stato = NORMALE;
          } 
      }
      else if(stato == ASTERISCO)
      {    
          if(a == '*')  stato = ELIMINA;
          else    
          {
              putchar('/');
              putchar(a);
              stato = NORMALE;
          }
      }

      else if(stato == ELIMINA)
      {
          if(a == '*')    stato = FINECOMMENTO;
      }
 
      else if(stato == FINECOMMENTO)
      {
          if(a == '/')   stato = NORMALE;
          else    stato = ELIMINA;
      }
    

  }
  return 0;
}
      