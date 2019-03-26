/*conta parole*/
/*stato NORMALE a == ' ' || a == '\n' || a == '\t'  contaparole++
                                                    stato = CONTA
                a == altri caratteri                NULL
  stato CONTA   a == altri caratteri                stato = NORMALE */      

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
          if(a == ' ' || a == '\n' || a == '\t')    
          {
              stato = CONTA;
              contaparole++;
          }
      }
      else if(stato == CONTA)    stato = NORMALE;

          
  }

  printf("%d %d %d", contatorerighe, contaparole, contatorecar);
  return 0;
}
      