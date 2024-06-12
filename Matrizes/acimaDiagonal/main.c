#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;

    printf ("Qual a ordem da matriz? ");
    scanf ("%d", &tamanho);

    while (tamanho<0 || tamanho>10){
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%d", &tamanho);
    }

    int i, j, x;
    int mat[tamanho][tamanho];
    int soma=0;

    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            printf ("Elemento da linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }

    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            if (i==j) {
                x=j+1;
                for (j=x; j<tamanho; j++) {
                    soma += mat[i][j];
                }
            }
        }
    }
    printf ("Soma dos elementos acima da diagonal principal: %d\n", soma);

    return 0;
}
