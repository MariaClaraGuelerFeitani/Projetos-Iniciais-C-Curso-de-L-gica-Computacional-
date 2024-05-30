#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada, i, multiplicacao;

    printf ("Deseja visualizar a tabuada de qual numero? ");
    scanf ("%d", &tabuada);

    for (i=0; i<11; i++) {
        multiplicacao = tabuada * i;
        printf ("%d x %d = %d \n", tabuada, i, multiplicacao);
    }
    return 0;
}
