#include <stdio.h>
#include <stdlib.h>

int main()
{
    int combustivel=0;
    int contAlcool=0, contGasolina=0, contDiesel=0;

    printf ("Qual e seu combustivel preferido?\n");
    printf ("1-Alcool\n");
    printf ("2-Gasolina\n");
    printf ("3-Diesel\n");
    printf ("4-Fim\n");

    while (combustivel != 4) {
    printf ("Codigo do Combustivel: ");
    scanf ("%d", &combustivel);

    while (combustivel < 1 || combustivel > 4) {
        printf ("Codigo invalido! Tente novamente: ");
        scanf ("%d", &combustivel);
    }

    if (combustivel==1) {
        contAlcool++;
    }

    else if (combustivel==2) {
        contGasolina++;
    }

    else if (combustivel==3) {
        contDiesel++;
    }

    }

    printf ("Muito obrigada!\n");
    printf ("Alcool: %d\n", contAlcool);
    printf ("Gasolina: %d\n", contGasolina);
    printf ("Diesel: %d\n", contDiesel);

    return 0;
}
