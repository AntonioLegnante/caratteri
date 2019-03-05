/*conta parole*/

#include <stdio.h>

int main ()
{
  enum stato {normale, nuovostato};
  int a, contatorerighe = 0, contatorecar = 0, contaparole = 0;
  enum stato stato = normale;

  while((a = getchar()) != EOF)
  {
      contatorecar++;

      if(a == '\n')    contatorerighe++;

      if(stato == normale)
      {
          if(a == ' ' || a == '\n' || a == '\t')    stato = nuovostato;
      }
      if(stato == nuovostato)
      {
          contaparole++;
          stato = normale;
      }
          
  }

  printf("%d %d %d", contatorerighe, contaparole, contatorecar);
  return 0;
}
      