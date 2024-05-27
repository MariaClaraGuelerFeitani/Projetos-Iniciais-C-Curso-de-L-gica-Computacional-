#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, troco, recebido;
    float valort;
    int quantidade;

    printf ("Qual o valor unitario do produto desejado? ");
    scanf ("%f", &preco);

    printf ("Quantas unidades desse produto voce adquiriu? ");
    scanf ("%d", &quantidade);

    printf ("Qual o valor que o cliente te deu? ");
    scanf ("%f", &recebido);

    valort = preco * quantidade;
    troco = recebido - valort;

    printf ("Troco: %.2f", troco);

    return 0;
}
