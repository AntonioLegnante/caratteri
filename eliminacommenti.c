/* stato NORMALE       a = "     stato = SCORRI
                                 stampa a
                       a = /     stato ASTERISCO
                       a = '     stato VIRGOLETTA
                                 stampa a
                       a =       altro stampa a
   
   stato SCORRI        a = "     stato = NORMALE
                                 stampa a
                       a = \     stampa a
                                 stato = CONTROLLO
                                 controllo = 1
                       a = altro stampa a
 
   stato VIRGOLETTA    a = '     stampa a
                                 stato = NORMALE
                       a = \     stampa a
                                 stato CONTROLLO
                                 controllo = 2
                       a = altro stampa a
  
   stato ASTERISCO     a = *     stato = ELIMINA
                       a = altro stampa /
                                 stampa a
                                 stato = NORMALE

   stato ELIMINA       a = *     stato = FINECOMMENTO
                     
   stato FINECOMMENTO  a = /     stato = NORMALE
                       a = altro stato = ELIMINA

   stato CONTROLLO     a = tutto stampa a
                                 controllo = 1 stato = SCORRI
                                 controllo = 2 stato = VIRGOLETTA*/ 

#include <stdio.h> 

int main ()
{
  enum stato {NORMALE, ASTERISCO, ELIMINA, FINECOMMENTO, SCORRI, VIRGOLETTA, CONTROLLO};
  char a;
  int controllo;
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
          else if(a == '\\')
          {
              putchar(a);
              stato = CONTROLLO;
              controllo = 1;
          }

          else    putchar(a);
      }
      else if(stato == VIRGOLETTA)
      {    
          if(a == '\'')
          {
              putchar(a);
              stato = NORMALE;
          }
  
          else if(a == '\\')
          {
              putchar(a);
              stato = CONTROLLO;
              controllo = 2;
          }
          else    putchar(a);
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
      
      else if(stato == CONTROLLO)
      {
          putchar(a);

          if(controllo == 1)    stato = SCORRI;
          else    stato = VIRGOLETTA;   
      }
    

  }
  return 0;
}