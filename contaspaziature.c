/*conta linee*/

#include <stdio.h>

int main ()
{
    int contatorerighe = 0, a, contatoretab = 0, contatorespazi = 0;

    printf("conteggio delle righe\n");

    while((a = getchar()) != EOF)
    {
        switch (a)
        {
            case'\n':
            contatorerighe++;
            break;
            
            case'\t':
            contatoretab++;
            break;

            case' ':
            contatorespazi++;
            break;
        }

    }

    printf("sono presenti %d righe nel file, sono presenti %d spazi e sono presenti %d tabulazioni", contatorerighe, contatorespazi, contatoretab);

    return 0;

}