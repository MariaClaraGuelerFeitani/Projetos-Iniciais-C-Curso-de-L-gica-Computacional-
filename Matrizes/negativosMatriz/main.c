#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c;

    printf ("Quantas linhas tera a matriz? ");
    scanf ("%d", &l);

    while (l<0 || l>10) {
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%d", &l);
    }

    printf ("Quantas colunas tera a matriz? ");
    scanf ("%d", &c);

    while (c<0 || c>10) {
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%d", &c);
    }

    int i, j;
    int mat[l][c];
    int contNegativo=0;

    for (i=0; i<l; i++) {
        for (j=0; j<c; j++) {
            printf ("Elemento da linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }

    for (i=0; i<l; i++) {
        for (j=0; j<c; j++) {
            if (mat[i][j]<0) {
                contNegativo++;
            }
        }
    }

    if (contNegativo!=0) {
        printf ("Valores negativos: \n");
        for (i=0; i<l; i++) {
            for (j=0; j<c; j++) {
                if (mat[i][j]<0) {
                    printf ("%d \n", mat[i][j]);
                }
            }
        }
    }

    return 0;
}
