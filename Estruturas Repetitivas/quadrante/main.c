#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cx=1, cy=1;

    while (cx != 0 && cy != 0) {
        printf ("Coordenada x: ");
        scanf ("%f", &cx);

        printf ("Coordenada y: ");
        scanf ("%f", &cy);

        if (cx > 0 && cy > 0) {
        printf ("Q1\n");
        }

        else if (cx < 0 && cy > 0) {
            printf ("Q2\n");
        }

        else if (cx < 0 && cy < 0) {
            printf ("Q3\n");
        }

        else if (cx > 0 && cy < 0) {
            printf ("Q4\n");
        }
    }

    printf ("Coordenada invalida!\n");

    return 0;
}
