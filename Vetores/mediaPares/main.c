#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elementos;

    printf ("Quantos elementos tera o vetor? ");
    scanf ("%d", &elementos);

    int vet[elementos], i, soma=0, cont=0;
    float media;

    for (i=0; i<elementos; i++) {
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
    }

    for (i=0; i<elementos; i++) {
        if (vet[i]%2==0) {
            soma += vet[i];
            cont++;
        }
    }

    if (cont == 0) {
        printf ("Nenhum numero par!\n");
    }

    else {
        media = soma / cont;
        printf ("Media dos pares: %.1f\n", media);
    }

    return 0;
}
