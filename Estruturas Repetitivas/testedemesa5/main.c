#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    x = 2;
    y = 10;

    printf ("Ola\n");

    while (x < y) {
        printf ("%d - %d\n", x, y);
        x = x * 2;
        y = y + 1;
    }

    return 0;
}
