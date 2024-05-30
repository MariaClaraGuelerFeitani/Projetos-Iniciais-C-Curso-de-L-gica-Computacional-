#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=1;

    while (x != y) {
        printf ("Digite um numero: ");
        scanf ("%d", &x);

        printf ("Digite outro numero: ");
        scanf ("%d", &y);

        if (x>y) {
            printf ("Decrescente!\n");
        }

        else if (x<y) {
            printf ("Crescente!\n");
        }

        else {
            break;
        }


    }


    return 0;
}
