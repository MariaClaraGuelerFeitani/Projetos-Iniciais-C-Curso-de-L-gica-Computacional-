#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf ("Digite um valor: ");
    scanf ("%d", &n1);

    printf ("Digite outro valor: ");
    scanf ("%d", &n2);

    printf ("Digite outro valor: ");
    scanf ("%d", &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf ("Maior numero = %d\n", n1);
    }

    else if (n2 >= n1 && n2 >= n3) {
        printf ("Maior numero = %d\n", n2);
    }

    else {
        printf ("Maior numero = %d\n", n3);
    }

    if (n1 <= n2 && n1 <= n3) {
        printf ("Menor numero = %d\n", n1);
    }

    else if (n2 <= n1 && n2 <= n3) {
        printf ("Menor numero = %d\n", n2);
    }

    else {
        printf ("Menor1 numero = %d\n", n3);
    }

    return 0;
}
