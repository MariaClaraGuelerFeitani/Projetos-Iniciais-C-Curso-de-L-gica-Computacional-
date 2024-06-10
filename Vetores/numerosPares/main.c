#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;

    printf ("Quantos numeros voce digitara? ");
    scanf ("%d", &numeros);

    int vet[numeros], i, quantPares=0;

    for (i=0; i<numeros; i++) {
        printf ("Digite um numero inteiro: ");
        scanf ("%d", &vet[i]);
    }

    for (i=0; i<numeros; i++) {
        if (vet[i]%2==0) {
            printf ("%d  ", vet[i]);

            quantPares++;
        }
    }

    printf ("\n");
    printf ("Quantidade de pares: %d\n", quantPares);

    return 0;
}
