/*stampa parole*/

/* stato START a == '\n' || a == '\t' || a == ' '  stato = STAMPA
               a == altri caratteri                stampa a
                                                   stato = NORMALE

   stato NORMALE a == ' ' || a == '\t' || a == ' '   vai a capo
                                                     stato = STAMPA
                 a == altri caratteri                stampa a

   stato STAMPA  a == qualsiasi cosa                stampa a
                                                    stato = NORMALE
*/
#include <stdio.h>

int main ()
{
  enum stato {NORMALE, STAMPA, START};
  char a;
  enum stato stato = START;

  while((a = getchar()) != EOF)
  {
      if(stato == START)
      {
          if(a == '\n' || a == '\t' || a == ' ')    stato = STAMPA;
          else 
          {
              putchar(a);
              stato = NORMALE;
          }
 
      }

      else if(stato == NORMALE)
      {
          if(a == ' ' || a == '\t' || a == ' ') 
          {
              putchar('\n');
              stato = STAMPA;
          }
          else    putchar(a);
      }
      
      else if(stato == STAMPA)
      {    
          putchar(a);
          stato = NORMALE;
      }
      
          
  }
  return 0;
}
      