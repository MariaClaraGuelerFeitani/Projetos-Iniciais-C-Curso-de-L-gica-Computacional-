#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf ("Digite um numero: ");
    scanf ("%d", &n1);

    printf ("Digite outro numero: ");
    scanf ("%d", &n2);

    if (n1 < n2) {
            if (n2 % n1 == 0) {
                printf ("%d e %d sao multiplos\n", n1, n2);
            }
             else {
                printf ("%d e %d nao sao multiplos\n", n1, n2);
             }
    }

    else {
            if (n1 % n2 == 0) {
                printf ("%d e %d sao multiplos\n", n2, n1);
            }
             else {
                printf ("%d e %d nao sao multiplos\n", n2, n1);
             }

    }
    return 0;
}
