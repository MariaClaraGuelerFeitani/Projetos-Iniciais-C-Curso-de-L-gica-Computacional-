#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i;

    x = 4;
    y = 0;
    i = 0;

    while (i < x) {
        i = i + 1;
        y = y + i;
        printf ("i = %d\n", i);
        printf ("y = %d\n", y);
    }

    return 0;
}
