#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, soma=0, cond;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &x);

    printf ("Digite outro numero inteiro: ");
    scanf ("%d", &y);

    if (x>y) {
        cond = y+1;
        for (i=cond; i<x; i++) {
            if (i%2!=0) {
                soma += i;
            }
        }
    }

    else {
        cond = x+1;
        for (i=cond; i<y; i++) {
            if (i%2!=0) {
                soma += i;
            }
        }
    }

    printf ("Soma dos Impares: %d\n", soma);

    return 0;
}
