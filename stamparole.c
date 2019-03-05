/*elimina commenti*/

#include <stdio.h>

int main ()
{
  enum stato {normale, nuovostato};
  char a;
  enum stato stato = normale;

  while((a = getchar()) != EOF)
  {
      if(stato == normale)
      {
          if(a == ' ')  stato = nuovostato;
          else    putchar(a);
      }
      if(stato == nuovostato)
      {    
          putchar('\n');
          stato = normale;
      }
      
          
  }
  return 0;
}
      