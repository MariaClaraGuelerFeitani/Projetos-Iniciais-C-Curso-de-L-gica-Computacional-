#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf ("Quantos valores vai ter cada vetor? ");
    scanf ("%d", &numero);

    float a[numero], b[numero], c[numero];
    int i;

    printf ("Digite os valores de A: \n");
    for (i=0; i<numero; i++) {
        printf ("%d: ", i);
        scanf ("%f", &a[i]);
    }

    printf ("Digite os valores de B: \n");
    for (i=0; i<numero; i++) {
        printf ("%d: ", i);
        scanf ("%f", &b[i]);
    }

    printf ("VALOR DA SOMA:\n");
    for (i=0; i<numero; i++) {
        c[i] = a[i] + b[i];
        printf ("%d: %.2f\n", i, c[i]);
    }

    return 0;
}
