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

    float mat[tamanho][tamanho];
    int i, j;
    float somaPo=0;
    int linha, coluna;
    float matAlterada;

    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            printf ("Elemento da linha %d, coluna %d: ", i, j);
            scanf ("%f", &mat[i][j]);
        }
    }

    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            if (mat[i][j]>=0){
                somaPo += mat[i][j];
            }
        }
    }
    printf ("\n");
    printf ("Soma dos positivos: %.1f\n", somaPo);
    printf ("\n");
    printf ("Escolha uma linha da matriz: ");
    scanf ("%d", &linha);

    printf ("Linha escolhida: ");
    for (i=0; i<tamanho; i++) {
        if (i==linha){
            for (j=0; j<tamanho; j++) {
                printf ("%.1f  ", mat[i][j]);
            }
        }
    }

    printf ("\n");
    printf ("\n");
    printf ("Escolha uma coluna da matriz: ");
    scanf ("%d", &coluna);

    printf ("Coluna escolhida: ");
    for (j=0; j<tamanho; j++) {
        if (j==coluna){
            for (i=0; i<tamanho; i++) {
                printf ("%.1f  ", mat[i][j]);
            }
        }
    }

    printf ("\n");
    printf ("\n");
    printf ("Diagonal principal: ");
    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            if (i==j){
                printf ("%.1f  ", mat[i][j]);
            }
        }
    }

    printf ("\n");
    printf ("\n");
    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            if (mat[i][j]<0){
                matAlterada = (pow(mat[i][j], 2));
                mat[i][j]=matAlterada;
            }
        }
    }

    printf ("Matriz Alterada: \n");
    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            printf ("%.1f  ", mat[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
