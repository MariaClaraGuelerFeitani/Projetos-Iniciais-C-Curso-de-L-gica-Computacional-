#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas;

    printf ("Quantas pessoas voce digitara? ");
    scanf ("%d", &pessoas);

    char nome[pessoas][40]; // (pessoas) representa o tamanho do vetor. 40 é a quantidade de caracteres de cada elemento
    float idade[pessoas], maisVelho=0;
    int i;

    for (i=0; i<pessoas; i++) {
        printf ("Pessoa numero %d:\n", i+1);
        printf ("Nome: ");
        scanf ("%s", &nome[i]);

        printf ("Idade: ");
        scanf ("%f", &idade[i]);
    }

    for (i=0; i<pessoas; i++) {
        if (idade[i]>maisVelho) {
            maisVelho = idade[i];
        }
    }

    for (i=0; i<pessoas; i++) {
        if (maisVelho == idade[i]) {
            printf ("Mais velho: %s\n", nome[i]);
        }
    }

    return 0;
}
