#include <stdio.h>
#include <stdlib.h>
#include <string.h> //acrescentei essa biblioteca para poder comparar os caracteres C, R ou S

int main()
{
    int casos, i, quant=0, quantT=0;
    char tipo[20];
    int contC=0, contS=0, contR=0;
    float porC, porR, porS;

    printf ("Quantos casos teste? ");
    scanf ("%d", &casos);

    for (i=0; i<casos; i++) {
        printf ("Quantidade de cobaias: ");
        scanf ("%d", &quant);

        printf ("Tipo de cobaia: (C, R ou S) ");
        scanf (" %c", &tipo);

        if (strcmp(tipo, "C")==0 || strcmp(tipo, "c")==0) {
            contC += quant;
        }

        else if (strcmp(tipo, "R")==0 || strcmp(tipo, "r")==0) {
            contR += quant;
        }

        else if (strcmp(tipo, "S")==0 || strcmp(tipo, "s")==0) {
            contS += quant;
        }

        else {
            while ((strcmp (tipo, "C")!=0) && (strcmp (tipo, "c")!=0) && (strcmp (tipo, "R")!=0) && (strcmp (tipo, "r")!=0) && (strcmp (tipo, "S")!=0) && (strcmp (tipo, "s")!=0)) {
                printf ("Tipo invalido! Tente novamente: ");
                scanf (" %c", &tipo);

                if (strcmp(tipo, "C")==0 || strcmp(tipo, "c")==0) {
                    contC += quant;
                }

                else if (strcmp(tipo, "R")==0 || strcmp(tipo, "r")==0) {
                    contR += quant;
                }

                else if (strcmp(tipo, "S")==0 || strcmp(tipo, "s")==0) {
                    contS += quant;
        }
            }
        }
    }

    printf ("RELATORIO FINAL:\n");
    quantT = contC+contR+contS;
    printf ("Total de cobaias: %d\n", quantT);
    printf ("Total de cobaias coelhos: %d\n", contC);
    printf ("Total de cobaias ratos: %d\n", contR);
    printf ("Total de cobaias sapos: %d\n", contS);

    porC = (contC*100)/quantT;
    porR = (contR*100)/quantT;
    porS = (contS*100)/quantT;

    printf ("Percentual Coelhos: %.2f\n", porC);
    printf ("Percentual Ratos: %.2f\n", porR);
    printf ("Percentual Sapos: %.2f\n", porS);

    return 0;
}
