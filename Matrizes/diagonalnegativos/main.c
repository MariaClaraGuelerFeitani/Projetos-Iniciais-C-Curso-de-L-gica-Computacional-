#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    int i, j;
    int contNegativos=0;

    printf ("Qual a ordem da matriz? ");
    scanf ("%d", &tamanho);

    while (tamanho < 0 || tamanho > 10) {
        printf ("Valor invalido! Digite novamente: ");
        scanf ("%d", &tamanho);
    }

    int mat [tamanho][tamanho];

    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            printf ("Elemento da linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }

    printf ("Matriz: \n");
    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            printf ("%d  ", mat[i][j]);
        }
        printf ("\n");
    }

    printf ("Diagonal principal: \n");
    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            if (i==j){
                printf (" %d ", mat[i][j]);
            }
            else {
                printf (" - ");
            }
        }
        printf ("\n");
    }

    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            if (mat[i][j]<0) {
                contNegativos++;
            }
        }
    }
    printf ("Quantidade de negativos: %d", contNegativos);

    return 0;
}
