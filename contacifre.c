/*conta linee*/

#include <stdio.h>

int main ()
{
    int contatore = 0, a, contatorenum[10] = {0}, contatorespazi = 0, i;

    printf("conteggio delle righe\n");

    while((a = getchar()) != EOF)
    {
        switch(a)
        {
            case '0':
               contatorenum[0]++;
            break;
            case '1':
               contatorenum[1]++;
            break;
            case '2':
               contatorenum[2]++;
            break;
            case '3':
               contatorenum[3]++;
            break;
            case '4':
               contatorenum[4]++;
            break;
            case '5':
               contatorenum[5]++;
            break;
            case '6':
               contatorenum[6]++;
            break;
            case '7':
               contatorenum[7]++;
            break;
            case '8':
               contatorenum[8]++;
            break;
            case '9':
               contatorenum[9]++;
            break;
            
            case' ':
            contatorespazi++;
            break;

            default:
            contatore++;
            break;

            }
    }

    printf("sono presenti %3d caratteri,%3d sono gli spazi\n", contatore, contatorespazi);
    for(i = 0; i < 10; i++)
        printf("sono presenti %d %d\n", contatorenum[i], i);

    return 0;

}