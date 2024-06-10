#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tVetor;

    printf ("Quantos numeros voce digitara? ");
    scanf ("%d", &tVetor);

    int i;
    float vet [tVetor];
    float somaVet=0, mediaVet=0;

    for (i=0; i<tVetor; i++) {
        printf ("Digite um numero: ");
        scanf ("%f", &vet[i]);
    }

    printf ("Valores: ");
    for (i=0; i<tVetor; i++) {
        printf ("%.1f ", vet[i]);

        somaVet += vet[i];
    }

    printf ("\n");
    printf ("Soma: %.2f\n", somaVet);

    mediaVet = somaVet / tVetor;
    printf ("Media: %.2f\n", mediaVet);

    return 0;
}
