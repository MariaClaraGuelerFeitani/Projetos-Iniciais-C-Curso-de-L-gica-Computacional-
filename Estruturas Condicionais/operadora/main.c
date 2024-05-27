#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutos, tempoTotalExtra;
    float planoBasico, valorTotal, pagamentoTotal;

    printf ("Por quantos minutos voce falou no telefone durante o mes? ");
    scanf ("%d", &minutos);

    planoBasico = 50.00;

    if (minutos <= 100) {
        printf ("Valor a ser pago = %.2f\n", planoBasico);
    }

    else {
        tempoTotalExtra = minutos - 100;
        valorTotal = tempoTotalExtra * 2;
        pagamentoTotal = planoBasico + valorTotal;
        printf ("Valor a ser pago = %.2f\n", pagamentoTotal);
    }

    return 0;
}
