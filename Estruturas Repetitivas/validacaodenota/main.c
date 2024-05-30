#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    float n1, n2, media;
    int continuar=1;

    while (continuar != 0) {
    printf ("Nome: ");
    scanf ("%s", &nome);

    printf ("Nota 1: ");
    scanf ("%f", &n1);

    while (n1 < 0 || n1 > 10) {
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%f", &n1);
    }

    printf ("Nota 2: ");
    scanf ("%f", &n2);

     while (n2 < 0 || n2 > 10) {
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%f", &n2);
    }

    media = (n1+n2)/2;
    printf ("Media: %.2f\n", media);

    printf ("Gostaria de registrar outro aluno?\n");
    printf ("1-Sim\n");
    printf ("0-Nao\n");
    scanf ("%d", &continuar);

    }



    return 0;
}
