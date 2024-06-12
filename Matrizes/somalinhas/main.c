#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c;

    printf ("Quantidade de linhas da matriz: ");
    scanf ("%d", &l);

    while (l<0 || l>10){
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%d", &l);
    }

    printf ("Quantidade de colunas da matriz: ");
    scanf ("%d", &c);

    while (c<0 || c>10){
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%d", &c);
    }

    float mat[l][c];
    int i, j;
    float soma=0;
    float vet[l];

    for (i=0; i<l; i++) {
        printf ("Digite os valores da %da linha: \n", i+1);
        for (j=0; j<c; j++) {
            scanf ("%f", &mat[i][j]);
        }
    }

    printf ("Matriz: \n");
    for (i=0; i<l; i++) {
        for (j=0; j<c; j++) {
            printf ("%.1f ", mat[i][j]);
        }
        printf ("\n");
    }

    printf ("Vetor gerado: \n");
    for (i=0; i<l; i++) {
        soma=0;
        for (j=0; j<c; j++) {
            soma += mat[i][j];
        }
        vet[i]=soma;
        printf ("%.1f ", vet[i]);
        printf ("\n");
    }

    return 0;
}
