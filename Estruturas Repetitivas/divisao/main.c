#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casos, i;
    float n, d, divisao;

    printf ("Quantos casos voce digitara? ");
    scanf ("%d", &casos);

    for (i=0; i<casos; i++) {
        printf ("Numerador: ");
        scanf ("%f", &n);

        printf ("Denominador: ");
        scanf ("%f", &d);

        if (d==0) {
            printf ("Divisao Impossivel!\n");
        }

        else {
        divisao = n/d;
        printf ("Divisao: %.2f\n", divisao);
        }
    }
    return 0;
}
