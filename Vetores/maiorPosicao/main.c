#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf ("Quantos numeros voce digitara? ");
    scanf ("%d", &numero);

    float vet [numero];
    int i, posicaoMaiorValor;
    float maiorValor=0;

    for (i=0; i<numero; i++) {
        printf ("Digite um numero: ");
        scanf ("%f", &vet[i]);
    }

    for (i=0; i<numero; i++) {
        if (vet[i]>maiorValor) {
            maiorValor = vet[i];
            posicaoMaiorValor = i;
        }
    }

    printf ("Maior valor: %.2f\n", maiorValor);
    printf ("Posicao do maior valor: %d\n", posicaoMaiorValor);

    return 0;
}
