#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c;

    printf ("Quantas linhas tera cada matriz? ");
    scanf ("%d", &l);

    while (l<0 || l>10) {
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%d", &l);
    }

    printf ("Quantas colunas tera cada matriz? ");
    scanf ("%d", &c);

    while (l<0 || l>10) {
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%d", &l);
    }

    int i, j;
    int a[l][c];
    int b[l][c];
    int soma[l][c];

    printf ("Digite os valores da matriz A:\n");
    for (i=0; i<l; i++) {
        for (j=0; j<c; j++) {
            printf ("Elemento da linha %d, coluna %d: ", i, j);
            scanf ("%d", &a[i][j]);
        }
    }

    printf ("Digite os valores da matriz B:\n");
    for (i=0; i<l; i++) {
        for (j=0; j<c; j++) {
            printf ("Elemento da linha %d, coluna %d: ", i, j);
            scanf ("%d", &b[i][j]);
        }
    }

    for (i=0; i<l; i++) {
        for (j=0; j<c; j++) {
            soma[i][j] = a[i][j] + b[i][j];
        }
    }

    printf ("Matriz soma:\n");
    for (i=0; i<l; i++) {
        for (j=0; j<c; j++) {
            printf ("%d ", soma[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
