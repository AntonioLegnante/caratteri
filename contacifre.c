/*conta linee*/

#include <stdio.h>

int main ()
{
    int contatore = 0, a, contatorenum[10] = {0}, contatorespazi = 0, i;

    printf("conteggio delle righe\n");

    while((a = getchar()) != EOF)
    {
        if(a >= '0' && a <= '9')
        {
            i = a - '0';
            contatorenum[i]++;
        }
         else if(a == ' ')
            contatorespazi++;
         else
            contatore++;

    }

    printf("sono presenti %3d caratteri %3d sono gli spazi\n", contatore, contatorespazi);
    for(i = 0; i < 10; i++)
        printf("sono presenti %d %d\n", contatorenum[i], i);

    return 0;

}