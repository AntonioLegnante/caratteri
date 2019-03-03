/*conta linee*/

#include <stdio.h>

int main ()
{
    int contatore = 0, a;

    printf("conteggio delle righe\n");

    while((a = getchar()) != EOF)
    {
        if(a == '\n')
            contatore++;
    }

    printf("sono presenti %d righe nel file", contatore);

    return 0;

}