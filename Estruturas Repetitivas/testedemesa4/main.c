#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    x = 0;

    while (x < 5) {
        y = x * 3;
        printf ("y = %d\n", y);
        x = x + 1;
    }

    printf ("Fim!\n");

    return 0;
}
