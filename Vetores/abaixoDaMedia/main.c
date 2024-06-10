#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elementos;

    printf ("Quantos elementos vai ter o vetor? ");
    scanf ("%d", &elementos);

    float vet[elementos], soma=0, media=0;
    int i;

    for (i=0; i<elementos; i++) {
    printf ("Digite um numero: ");
    scanf ("%f", &vet[i]);
    soma += vet[i];
    }

    media = soma / elementos;
    printf ("Media do vetor: %.3f\n", media);

    printf ("Elementos abaixo da media:\n");
    for (i=0; i<elementos; i++) {
        if (vet[i]<media) {
            printf ("%.1f\n", vet[i]);
        }
    }

    return 0;
}
