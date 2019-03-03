/*conta linee*/

#include <stdio.h>

int main ()
{
    int contatore = 0, a, contatorenum = 0, contatorespazi = 0;

    printf("conteggio delle righe\n");

    while((a = getchar()) != EOF)
    {
        switch(a)
        {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '0':
            case '9':
            contatorenum++;
            break;
            
            case' ':
            contatorespazi++;
            break;

            default:
            contatore++;
            break;

            }
    }

    printf("sono presenti %d caratteri, %d sono le cifre e %d sono gli spazi", contatore, contatorenum, contatorespazi);

    return 0;

}