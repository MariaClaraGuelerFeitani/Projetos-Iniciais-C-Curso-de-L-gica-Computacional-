#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, fatorial=1; //fatorial tem que iniciar com 1, pois qualquer numero multiplicado por 1 é ele mesmo.

    printf ("Digite o valor de n: ");
    scanf ("%d", &num);

    while (num < 0 || num > 15) {
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%d", &num);
    }

    for (i=num; i>0; i--) {
        fatorial *= i; //fatorial inicia valendo 1 (como foi definido acima).
    }

    printf ("Fatorial = %d\n", fatorial);

    return 0;
}
