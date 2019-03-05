/*elimina commenti*/

#include <stdio.h>

int main ()
{
  enum stato {normale, nuovostato, eliminacommento, eliminacommento1};
  char a;
  enum stato stato = normale;

  while((a = getchar()) != EOF)
  {
      if(stato == normale)
      {
          if(a == '/')  stato = nuovostato;
          else    putchar(a);
      }
      else if(stato == nuovostato)
      {    
          if(a == '*')  stato = eliminacommento;
          else    
          {
              putchar('/');
              putchar(a);
              stato = normale;
          }
      }

      else if(stato == eliminacommento)
      {
          if(a == '*')    stato = eliminacommento1;
      }

      else if(stato == eliminacommento1)
      {
          if(a == '/')   stato = normale;
      }
      
          
  }
  return 0;
}
      