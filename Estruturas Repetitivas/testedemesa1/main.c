#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    x = 5;
    y = 0;

    while (x > 2) { // enquanto x for maior que 2, vai rodar esse código
        printf ("x = %d\n", x);
        printf ("y = %d\n", y);
        y = y + x;
        x = x -1;
    }
    return 0;
}
