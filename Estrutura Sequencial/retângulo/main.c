#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura;
    float area, perimetro, diagonal;

    printf ("Qual e a base do retangulo?");
    scanf ("%f", &base);

    printf ("\n Qual e a altura do retangulo?");
    scanf ("%f", &altura);

    area = base * altura;

    perimetro = (2 * base) + (2 * altura);

    diagonal = sqrt((pow(base,2)) + (pow(altura,2)));

    printf ("\n Area: %.4f", area);
    printf ("\n Perimetro: %.4f", perimetro);
    printf ("\n Diagonal: %.4f", diagonal);

    return 0;
}
