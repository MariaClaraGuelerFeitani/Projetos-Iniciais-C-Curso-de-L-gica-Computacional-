#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [100];
    float valorHora;
    float horasTrab;
    float valor;

    printf ("Qual e o seu nome? ");
    scanf ("%s", &nome);

    printf ("Qual valor voce recebe por hora? ");
    scanf ("%f", &valorHora);

    printf ("Qual a quantidade de horas trabalhadas? ");
    scanf ("%f", &horasTrab);

    valor = valorHora * horasTrab;

    printf ("O pagamento para %s deve ser %.2f", nome, valor);

    return 0;
}
