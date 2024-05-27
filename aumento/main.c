#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioInicial;
    float novoSalario, aumento;
    float porcentagem;

    printf ("Quanto voce ganha? ");
    scanf ("%f", &salarioInicial);

    if (salarioInicial <= 1000) {
        porcentagem = 20;
        novoSalario = 1.2 * salarioInicial;
        aumento = novoSalario - salarioInicial;
    }

    else if (salarioInicial > 1000 && salarioInicial <= 3000) {
        porcentagem = 15;
        novoSalario = 1.15 * salarioInicial;
        aumento = novoSalario - salarioInicial;
    }

    else if (salarioInicial > 3000 && salarioInicial <= 8000) {
        porcentagem = 10;
        novoSalario = 1.1 * salarioInicial;
        aumento = novoSalario - salarioInicial;
    }

    else {
        porcentagem = 5;
        novoSalario = 1.05 * salarioInicial;
        aumento = novoSalario - salarioInicial;
    }

    printf ("Novo salario = %.2f\n", novoSalario);
    printf ("Aumento = %.2f\n", aumento);
    printf ("Porcentagem = %.2f\n", porcentagem);

    return 0;
}
