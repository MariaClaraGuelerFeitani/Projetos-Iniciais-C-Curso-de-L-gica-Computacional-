#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, numero, i, dentro=0, fora=0;

    printf ("Quantos numeros voce quer digitar? ");
    scanf ("%d", &x);

    for (i=0; i<x; i++){
        printf ("Numero %d: ", i+1);
        scanf ("%d", &numero);

        if (numero >= 10 && numero <= 20) {
            dentro++;
        }

        else {
            fora++;
        }
    }

    printf ("Dentro: %d\n", dentro);
    printf ("Fora: %d\n", fora);

    return 0;
}
