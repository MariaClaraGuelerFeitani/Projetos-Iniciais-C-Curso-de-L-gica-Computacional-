#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta, raiz1, raiz2;

    printf ("Qual o valor do coeficiente a? ");
    scanf ("%f", &a);

    if (a == 0) {
        printf ("Valor invalido para a\n");
        return 0;
    }

    printf ("Qual o valor do coeficiente b? ");
    scanf ("%f", &b);

    printf ("Qual o valor do coeficiente c? ");
    scanf ("%f", &c);

    delta = pow(b,2) - 4 * a * c;

    if (delta == 0) {
        raiz1 = (- b + sqrt(delta)) / (2 * a);
        printf ("X1 e X2 = %.4f\n", raiz1);
    }

    else if (delta > 0) {
        raiz1 = (- b + sqrt(delta)) / (2 * a);
        raiz2 = (- b - sqrt(delta)) / (2 * a);

        printf ("X1 = %.4f\n", raiz1);
        printf ("X2 = %.4f\n", raiz2);
    }

    else {
        printf ("Essa equacao nao possui valores reais\n");
    }

    return 0;
}
