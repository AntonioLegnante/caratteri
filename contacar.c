/*contacaratteri */

#include <stdio.h>

int main ()
{
    int a, contatore = 0;

    printf("conta i caratteri del file\n");
    
    while((a = getchar()) != EOF)    contatore++;

    printf("%d", contatore);
    
    return 0;

}
