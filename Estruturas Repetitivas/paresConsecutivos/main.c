#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    int s1, s2, s3, s4, s5, soma;

    while (x!=0) {
        printf ("Digite um numero inteiro: ");
        scanf ("%d", &x);

        if (x==0){
            break;
        }

        else if (x%2==0) {
            s1 = x;
            s2 = s1 + 2;
            s3 = s2 + 2;
            s4 = s3 + 2;
            s5 = s4 + 2;
            soma = s1 + s2 + s3 + s4 + s5;
        }

        else {
            s1 = x + 1;
            s2 = s1 + 2;
            s3 = s2 + 2;
            s4 = s3 + 2;
            s5 = s4 + 2;
            soma = s1 + s2 + s3 + s4 + s5;
        }

        printf ("Soma: %d\n", soma);

    }
    return 0;
}
