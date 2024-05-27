#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2;
    int soma;

    printf ("Digite um valor: ");
    scanf ("%d", &valor1);

    printf ("Digite um valor: ");
    scanf ("%d", &valor2);

    soma = valor1 + valor2;

    printf ("Soma: %d",soma);

    return 0;
}
