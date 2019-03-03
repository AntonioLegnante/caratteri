/*spazi multipli*/

#include <stdio.h>

int main ()
{
    int a; 
    enum stato {normale, nuovostato};
    enum stato stato = normale;

    while((a = getchar()) != EOF) 
    {
        if(stato == normale)
        {
            if(a == ' ')    stato = nuovostato;
            else    putchar(a);
        }
        else
            if(a != ' ')
            {    
                stato = normale;
                putchar(' ');
                putchar(a);
            }

    }

    return 0;
}

               
            
             
    