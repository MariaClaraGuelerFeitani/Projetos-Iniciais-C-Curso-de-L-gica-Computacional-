#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cx, cy;

    printf ("Coordenada x: ");
    scanf ("%f", &cx);

    printf ("Coordenada y: ");
    scanf ("%f", &cy);

    if (cx == 0 && cy == 0) {
        printf ("Origem\n");
    }

    else if (cy == 00 && cx != 0) {
        printf ("Eixo X - Eixo das Abscissas\n");
    }

    else if (cx == 00 && cy != 0) {
        printf ("Eixo Y - Eixo das Ordenadas\n");
    }

    else if (cx > 0 && cy > 0) {
        printf ("Primeiro quadrante\n");
    }

    else if (cx < 0 && cy > 0) {
        printf ("Segundo quadrante\n");
    }

    else if (cx < 0 && cy < 0) {
        printf ("Terceiro quadrante\n");
    }

    else {
        printf ("Quarto quadrante\n");
    }

    return 0;
}
