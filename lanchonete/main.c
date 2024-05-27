#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, quantidade;
    float valor;

    while (1) { // enquanto while for diferente de 0 (no caso 1), ele continuará repetindo
    printf ("Observe o preco dos produtos disponiveis da lanchonete:\n");
    printf ("1- 5,00\n");
    printf ("2- 3,50\n");
    printf ("3- 4,80\n");
    printf ("4- 8,90\n");
    printf ("5- 7,32\n");
    printf ("Qual voce gostaria? ");
    scanf ("%d", &codigo);

    if (codigo < 1 || codigo > 5) { // se o código for inválido, ele vai cair nesse if (que vai printar a mensagem de código inválido) e vai pedir para a pessoa digitar outro código (loop).
        printf ("Codigo invalido!\n");
    }

    else { // se o código for válido, vai cair no else e esse loop vai ser desfeito por conta do break.
        break;
    }

    }

    printf ("Quantidade desse produto: ");
    scanf ("%d", &quantidade);

    switch (codigo) {
        case 1:
            valor = 5.00 * quantidade;
            printf ("Valor a ser pago = %.2f\n", valor);
            break;

        case 2:
            valor = 3.50 * quantidade;
            printf ("Valor a ser pago = %.2f\n", valor);
            break;

        case 3:
            valor = 4.80 * quantidade;
            printf ("Valor a ser pago = %.2f\n", valor);
            break;

        case 4:
            valor = 8.90 * quantidade;
            printf ("Valor a ser pago = %.2f\n", valor);
            break;

        case 5:
            valor = 7.32 * quantidade;
            printf ("Valor a ser pago = %.2f\n", valor);
            break;
    }

    return 0;
}
