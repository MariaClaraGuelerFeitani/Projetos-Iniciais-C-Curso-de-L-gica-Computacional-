#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &x);

    for (i=1; i<x+1; i++) {
        if (i%2!=0) {
            printf ("%d\n", i);
        }
    }

    return 0;
}
