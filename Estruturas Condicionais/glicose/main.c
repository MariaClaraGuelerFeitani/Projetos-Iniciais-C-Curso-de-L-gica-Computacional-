#include <stdio.h>
#include <stdlib.h>

int main()
{
    float glicose;

    printf ("Qual a quantidade de glicose no sangue? ");
    scanf ("%f", &glicose);

    if (glicose <= 100) {
        printf ("Normal\n");
    }

    else if (glicose > 100 && glicose <= 140) {
        printf ("Elevado\n");
    }

    else {
        printf ("Diabetes\n");
    }

    return 0;
}
