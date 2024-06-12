#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;

    printf ("Qual a ordem da matriz? ");
    scanf ("%d", &tamanho);

    while (tamanho<0 || tamanho>10) {
        printf ("Valor invalido! Tente novamente: ");
        scanf ("%d", &tamanho);
    }

    int i, j;
    float mat[tamanho][tamanho];
    float maior=0;

    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            printf ("Elemento da linha %d, coluna %d: ", i, j);
            scanf ("%f", &mat[i][j]);
        }
    }

    printf ("Maior elemento de cada linha: \n");
    for (i=0; i<tamanho; i++) {
        maior=0;
        for (j=0; j<tamanho; j++) {
            if (mat[i][j]>maior) {
                maior = mat[i][j];
            }
        }
        printf ("%.1f\n", maior);
    }
    return 0;
}
