#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    x = 100;
    y = 100;

    while (x != y) { // não vai entrar, pois x = y
        printf ("Olha\n");
        x = sqrt(y);
    }

    return 0;
}
