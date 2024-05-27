#include <stdio.h>
#include <stdlib.h>
#include <string.h> //acrescentei essa biblioteca para poder comparar os caracteres C ou F

int main()
{
    char escala[10];
    float paraC, paraF;
    float temperatura;

    printf ("Voce vai informar a temperatura em qual escala (C ou F)? ");
    scanf (" %c", escala);

    if (strcmp(escala, "C") == 0 || strcmp(escala, "c") == 0) { // strcmp � uma fun��o da biblioteca string.h que serve para diferenciar letra mai�scula e min�scula
        printf ("Informe a temperatura: ");                     // essa fun��o strcmp compara se a string armazenada na vari�vel escala � C ou c, se for ela retorna 0...
        scanf ("%f", &temperatura);

        paraF = ((temperatura * 9) / 5) + 32;
        printf ("Temperatura equivalente em Fahrenheit: %.2f\n", paraF);
    }

    else if (strcmp(escala, "F") == 0 || strcmp(escala, "f") == 0) {
        printf ("Informe a temperatura: ");
        scanf ("%f", &temperatura);

        paraC = ((temperatura - 32) * 5) / 9;
        printf ("Temperatura equivalente em Celsius: %.2f\n", paraC);
    }

    else {
        printf ("Escala invalida!\n");
        return 0;
    }

    return 0;
}
