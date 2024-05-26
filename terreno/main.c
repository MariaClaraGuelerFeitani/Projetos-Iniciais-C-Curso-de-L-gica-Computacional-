#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largura, comprimento;
    float valormq;
    float area;
    float valort;

    printf ("Digite a largura do terreno?\n");
    scanf ("%f", &largura);

    printf ("Digite o comprimento do terreno?\n");
    scanf ("%f", &comprimento);

    printf ("Qual o valor do metro quadrado do terreno?\n");
    scanf ("%f", &valormq);

    area = largura * comprimento;
    valort = area * valormq;

    printf ("Area total do terreno: %.2f\n", area);
    printf ("Valor total do terreno: %.2f\n", valort);

    return 0;
}
