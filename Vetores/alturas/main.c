#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas, i;

    printf ("Quantas pessoas? ");
    scanf ("%d", &pessoas);

    char nome [pessoas][40]; //o primeiro parênteses (pessoas) representa o tamanho do vetor. O segundo representa a quantidade de caracteres que cada elemento do vetor char é capaz de armazenar
    float idade [pessoas], altura [pessoas];
    float somaAltura=0, mediaAltura=0;
    float contIdade=0, porcIdade=0;

    for (i=0; i<pessoas; i++) {
        printf ("Dados da pessoa %d:\n", i+1);

        printf ("Nome: ");
        scanf ("%s", &nome[i]);

        printf ("Idade: ");
        scanf ("%f", &idade[i]);

        if (idade[i] < 16) {
            contIdade++;
        }

        printf ("Altura: ");
        scanf ("%f", &altura[i]);

        somaAltura += altura[i];
    }

    mediaAltura = somaAltura / pessoas;
    printf ("Media Alturas: %.2f\n", mediaAltura);

    porcIdade = (contIdade * 100) / pessoas;
    printf ("Pessoas com menos de 16 anos: %.2f porcento\n", porcIdade);

    for (i=0; i<pessoas; i++) {
        if (idade[i] < 16) {
            printf ("%s\n", nome[i]);
        }
    }

    return 0;
}
