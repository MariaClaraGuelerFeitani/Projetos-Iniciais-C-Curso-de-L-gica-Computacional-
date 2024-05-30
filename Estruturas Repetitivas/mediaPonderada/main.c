#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casos, i;
    float n1, n2, n3, mediaPon=0;

    printf ("Quantos casos voce vai digitar? ");
    scanf ("%d", &casos);

    for (i=0; i<casos; i++) {
        printf ("Digite tres numeros:\n");
        scanf ("%f", &n1);
        scanf ("%f", &n2);
        scanf ("%f", &n3);

        mediaPon = ((2 * n1)+(3 * n2)+(5 * n3))/10; // 2+3+5=10 (soma dos pesos)
        printf ("Media Ponderada: %.1f\n", mediaPon);

    }
    return 0;
}
