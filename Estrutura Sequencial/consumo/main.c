#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia, consumo, consumoMedio;

    printf ("Qual a distancia percorrida pelo carro? ");
    scanf ("%f", &distancia);

    printf ("Qual foi o consumo de combustivel nesse trecho em questao? ");
    scanf ("%f", &consumo);

    consumoMedio = distancia / consumo;

    printf ("Consumo Medio = %.3f", consumoMedio);

    return 0;
}
