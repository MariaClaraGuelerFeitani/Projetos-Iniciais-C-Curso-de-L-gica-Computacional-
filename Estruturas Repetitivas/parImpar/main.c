#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, num;

    printf ("Quantos numeros voce digitara? ");
    scanf ("%d", &x);

    for (i=0; i<x; i++) {
        printf ("%d- numero inteiro: ", i+1);
        scanf ("%d", &num);

        if (num == 0) {
            printf ("NULO\n");
        }

        else if (num < 0 && num%2==0) {
            printf ("PAR E NEGATIVO\n");
        }

        else if (num < 0 && num%2!=0) {
            printf ("IMPAR E NEGATIVO\n");
        }

        else if (num > 0 && num%2==0) {
            printf ("PAR E POSITIVO\n");
        }

        else {
            printf ("IMPAR E POSITIVO\n");
        }
    }

    return 0;
}
