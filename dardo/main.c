#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d1=0, d2=0, d3=0;

    printf ("Qual foi a distancia da primeira tentativa? ");
    scanf ("%f", &d1);

    printf ("Qual foi a distancia da segunda tentativa? ");
    scanf ("%f", &d2);

    printf ("Qual foi a distancia da terceira tentativa? ");
    scanf ("%f", &d3);

    if (d1 >= d2 && d1 >= d3) {
        printf ("Maior distancia = %.2f\n", d1);
    }

    else if (d2 >= d1 && d2 >= d3) {
        printf ("Maior distancia = %.2f\n", d2);
    }

    else {
        printf ("Maior distancia = %.2f\n", d3);
    }

    return 0;
}
