#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    x = 2;
    y = 0;

    while (x < 60) {
        printf ("x = %d\n", x);
        printf ("y = %d\n", y);

        x = x * 2;
        y = y + 10;
    }

    return 0;
}
