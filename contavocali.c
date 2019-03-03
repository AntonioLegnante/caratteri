/*conta linee*/

#include <stdio.h>

int main ()
{
    int contatore = 0, a;

    printf("conteggio delle righe\n");

    while((a = getchar()) != EOF)
    {
        switch(a)
        {
            case'a':
            case'e':
            case'i':
            case'o':
            case'u':
            contatore++;
            break;
        }
    }

    printf("sono presenti %d vocali nel file", contatore);

    return 0;

}