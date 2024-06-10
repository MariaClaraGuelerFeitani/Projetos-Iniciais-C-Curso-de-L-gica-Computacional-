#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos;

    printf ("Quantos alunos serao digitados? ");
    scanf ("%d", &alunos);

    char nome[alunos][40]; //vetor char
    float n1[alunos], n2[alunos], media[alunos];
    int i;

    for (i=0; i<alunos; i++) {
        printf ("Nome: ");
        scanf ("%s", &nome[i]);

        printf ("Primeiro semestre: ");
        scanf ("%f", &n1[i]);

        while (n1[i]<0 || n1[i]>10) {
            printf ("Nota invalida! Tente novamente: ");
            scanf ("%f", &n1[i]);
        }

        printf ("Segundo semestre: ");
        scanf ("%f", &n2[i]);

        while (n2[i]<0 || n2[i]>10) {
            printf ("Nota invalida! Tente novamente: ");
            scanf ("%f", &n2[i]);
        }

        media [i] = (n1[i] + n2[i])/2;
    }

    printf ("Aprovados:\n");
    for (i=0; i<alunos; i++) {
        if (media[i]>=6) {
            printf ("%s\n", nome[i]);
        }
    }

    return 0;
}
