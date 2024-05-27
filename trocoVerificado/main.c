#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoProduto, valorRecebido, custoTotal, troco, falta;
    int quantidade;

    printf ("Qual o valor unitario do produto em questao? ");
    scanf ("%f", &precoProduto);

    printf ("Quantas unidades desse produto? ");
    scanf ("%d", &quantidade);

    printf ("Qual o valor recebido? ");
    scanf ("%f", &valorRecebido);

    custoTotal = precoProduto * quantidade;

    if (custoTotal < valorRecebido) {
        troco = valorRecebido - custoTotal;
        printf ("Troco = %.2f\n", troco);
    }

    else {
        falta = custoTotal - valorRecebido;
        printf ("Dinheiro insuficiente. Faltam %.2f reais\n", falta);
    }

    return 0;
}
