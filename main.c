#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long compteurbilles(long *pointeurN,long *pointeurbilles);

int main()
{
    long N = 0,billes = 25;
    long *pointeurN = &N;
    long *pointeurbilles = &billes;
    char prenom1[30];
    char prenom2[30];

    srand(time(NULL));
    int MIN = 1, MAX = 2, commence = (rand() % (MAX - MIN + 1)) + MIN;

    printf("____________MARIANBAD_____\n\n");
    printf("entrer votre prenom joueur 1:");
    scanf("%s", prenom1);
    printf("\n");
    printf("entrer votre prenom joueur 2:");
    scanf("%s", prenom2);
    printf("\n");

    while(billes > 1)
    {
        if(commence == 1)
        {
            printf("c'est a toi %s\n",prenom1);
             compteurbilles( pointeurN, pointeurbilles);
        }
        else
        {
          printf("c'est a toi %s\n",prenom2);
            compteurbilles(pointeurN, pointeurbilles);
        }
        if(billes == 1)
        {
            if(commence == 1)
            {
                printf("Bravo tu as gagne %s",prenom1);
            }
            else
            {
                printf("Bravo tu as gagne %s",prenom2);
            }
        }

        if(billes == 0)
        {
            printf("Il n'y a plus de billes,match nul\n");
        }

        if(commence == 1)
        {
            commence = 2;
        }
        else
        {
            commence = 1;
        }
    }
    return 0;
}

long compteurbilles(long *pointeurN,long *pointeurbilles)
{
    long i = 1;
    while(i)
    {
        printf("Combien voulez vous retirer de billes?\n");
        scanf("%ld", pointeurN);
        printf("\n");
        if(*pointeurN<1 || *pointeurN>5 || *pointeurN > *pointeurbilles)
        {
            printf("erreur, rejouer\n");
        }
        else
        {
         i = 0;
         *pointeurbilles = *pointeurbilles - *pointeurN;
         printf("Il reste %ld billes dans le sac \n", *pointeurbilles);
        }
    }
    return i;
}
