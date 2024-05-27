#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comecou, terminou, duracao;

    printf ("Hora inicial: ");
    scanf ("%d", &comecou);

    printf ("Hora final: ");
    scanf ("%d", &terminou);

    if (terminou == comecou) {
        duracao = 24;
    }

    else if (terminou > comecou) {
        duracao = terminou - comecou;
    }

    else {
        duracao = (24 - comecou) + terminou;
    }

    printf ("Duracao: %d horas\n", duracao);

    return 0;
}
