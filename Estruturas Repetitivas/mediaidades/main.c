#include <stdio.h>
#include <stdlib.h>

int main()
{
    float idade, somaIdade, mediaIdade, cont=0;

    printf ("Idade: ");
    scanf ("%f", &idade);

    if (idade < 0) {
        printf ("Impossivel calcular!\n");
        return 0;
    }

    while (idade >= 0) {
        somaIdade += idade;
        cont++;
        printf ("Idade: ");
        scanf ("%f", &idade);
    }

    mediaIdade = somaIdade / cont;
    printf ("Media das idades: %.2f\n", mediaIdade);


    return 0;
}
