/*conta parole*/

/*stato START  a == ' ' || a == '\n' || a == '\t'  stato CONTA
               a == altri caratteri                stato = NORMALE
                                                   contaparole++

  stato NORMALE a == ' ' || a == '\n' || a == '\t' stato = CONTA
                a == altri caratteri               NULL

  stato CONTA   a != ' ' || a != '\n' || a != '\t' contaparole++
                                                   stato = NORMALE     

#include <stdio.h>

int main ()
{
  enum stato {NORMALE, CONTA, START};
  int a, contatorerighe = 1, contatorecar = 0, contaparole = 0;
  enum stato stato = START;

  /*enum stato, tipologia di variabile*/                                                        
  
  while((a = getchar()) != EOF)
  {
      contatorecar++;

      if(a == '\n')    contatorerighe++;

      if(stato == START)
      {
          if(a == ' ' || a == '\n' || a == '\t')    stato = CONTA;
          else    
          {
              stato = NORMALE;
              contaparole++;
          }
      }

      else if(stato == NORMALE)
      {
          if(a == ' ' || a == '\n' || a == '\t')    stato = CONTA;
      }
      else if(stato == CONTA)    
      {
          if(a != ' ' || a != '\n' || a != '\t')    
          {
              contaparole++;
              stato = NORMALE;
          }

      }     
  }

  printf("%d %d %d", contatorerighe, contaparole, contatorecar);
  return 0;
}
      