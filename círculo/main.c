#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main()
{
    float raio, area;

    printf ("Qual a area do circulo? ");
    scanf ("%f", &raio);

    area = pi * (pow(raio,2));

    printf ("Area: %.3f", area);

    return 0;
}
