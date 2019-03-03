/*copia del file*/

#include <stdio.h>

int main ()
{
    int a;
    
    printf("lettura del file\n");
    
    while((a = getchar())!= EOF) 
        putchar(a);

    return 0;
}
    