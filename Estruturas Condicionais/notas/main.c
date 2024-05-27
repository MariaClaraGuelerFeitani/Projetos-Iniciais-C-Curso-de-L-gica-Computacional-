#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1, p2, notaTotal;

    printf ("Qual foi sua nota na primeira prova? ");
    scanf ("%f", &p1);

    printf ("Qual foi sua nota na segunda prova? ");
    scanf ("%f", &p2);

    notaTotal = p1 + p2;
    printf ("Nota final = %.1f\n", notaTotal);

    if (notaTotal < 60) {
        printf ("REPROVADO!\n");
    }
    return 0;
}
