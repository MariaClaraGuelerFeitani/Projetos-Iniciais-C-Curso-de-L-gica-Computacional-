#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int pessoas;

    printf ("Quantas pessoas serao digitadas: ");
    scanf ("%d", &pessoas);

    float altura[pessoas];
    float maisAlto=0, maisBaixo=200;
    char genero[pessoas];
    int i;
    float somaAlMu=0, mediaAlMu=0;
    int contM=0, contH=0;

    for (i=0; i<pessoas; i++) {
        printf ("Altura %d: ", i+1);
        scanf ("%f", &altura[i]);

        printf ("Genero (M ou F): ");
        scanf (" %c", &genero[i]);

        while (genero[i] != 'F' && genero[i] != 'f' && genero[i] != 'M' && genero[i] != 'm') {
            printf ("Digite novamente: ");
            scanf (" %c", &genero[i]);

        }

    }

    for (i=0; i<pessoas; i++) {
        if (genero[i] == 'F' || genero[i] == 'f') {
            contM++;
            somaAlMu += altura[i];
        }

        else {
            contH++;
        }
    }

    if (contM != 0) {
        mediaAlMu = somaAlMu / contM;
    }

    else {
        mediaAlMu = 0;
    }

    for (i=0; i<pessoas; i++) {
        if (altura[i]>maisAlto) {
            maisAlto = altura[i];
        }

        if (altura [i]<maisBaixo) {
            maisBaixo = altura[i];
        }
    }


    printf ("Maior Altura: %.2f\n", maisAlto);
    printf ("Menor Altura %.2f\n", maisBaixo);


    printf ("Media das alturas das mulheres: %.2f\n", mediaAlMu);

    printf ("Numero de homens: %d\n", contH);

    return 0;
}
