#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produtos;

    printf ("Quantos produtos serao digitados? ");
    scanf ("%d", &produtos);

    char nome [produtos][20];
    float pcompra[produtos], pvenda[produtos], lucro[produtos];
    int i;
    int menorLucro=0, medioLucro=0, maiorLucro=0;
    float tcompra=0, tvenda=0, tlucro=0;

    for (i=0; i<produtos; i++) {
        printf ("Produto %d: \n", i+1);
        printf ("Nome: ");
        scanf ("%s", &nome[i]);

        printf ("Preco de compra: ");
        scanf ("%f", &pcompra[i]);

        tcompra += pcompra[i];

        printf ("Preco de venda: ");
        scanf ("%f", &pvenda[i]);

        tvenda += pvenda[i];

        lucro [i] = pvenda[i] - pcompra[i];
        tlucro += lucro[i];
    }

    for (i=0; i<produtos; i++) {
        if (((pvenda[i]*100)/pcompra[i])<110) {
            menorLucro++;
        }

        else if ((((pvenda[i]*100)/pcompra[i])>=110) && (((pvenda[i]*100)/pcompra[i])<=120)) {
            medioLucro++;
        }

        else {
            maiorLucro++;
        }
    }

    printf ("\n");
    printf ("RELATORIO:\n");
    printf ("Lucro abaixo de 10 porcento: %d\n", menorLucro);
    printf ("Lucro entre 10 porcento e 20 porcento: %d\n", medioLucro);
    printf ("Lucro acima de 20 porcento: %d\n", maiorLucro);

    printf ("Valor total de compra: %.2f\n", tcompra);
    printf ("Valor total de venda %.2f\n", tvenda);
    printf ("Lucro total: %.2f\n", tlucro);

    return 0;
}
