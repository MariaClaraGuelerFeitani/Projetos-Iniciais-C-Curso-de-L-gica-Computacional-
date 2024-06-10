#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tVetor, i;

    printf ("Quantos numeros voce ira digitar? ");
    scanf ("%d", &tVetor);

    while (tVetor < 0 || tVetor > 10) {
        printf ("Tamanho invalido! Tente novamente: ");
        scanf ("%d", &tVetor);
    }

    int vet [tVetor];

    for (i=0; i<tVetor; i++) {
        printf ("Digite um numero inteiro: ");
        scanf ("%d", &vet[i]);
    }

    for (i=0; i<tVetor; i++) {
        if (vet[i]<0) {
            printf ("%d\n", vet[i]);
        }
    }

    return 0;
}
