#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    float areaQua;
    float areaTri;
    float areaTrape;

    printf ("Qual o valor de A? ");
    scanf ("%f", &a);

    printf ("Qual o valor de B? ");
    scanf ("%f", &b);

    printf ("Qual o valor de C? ");
    scanf ("%f", &c);

    areaQua = pow (a,2);
    areaTri = (a * b) / 2;
    areaTrape = ((a + b) * c) / 2;

    printf ("Area Quadrado = %.4f\n", areaQua);
    printf ("Area Triangulo = %.4f\n", areaTri);
    printf ("Area Trapezio = %.4f\n", areaTrape);

    return 0;
}
