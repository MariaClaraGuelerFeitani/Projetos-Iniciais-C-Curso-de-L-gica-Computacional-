#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, i, soma=0;

    cout << "Primeiro valor: ";
    cin >> x;

    cout << "Segundo valor: ";
    cin >> y;

    if (x>y) {
        for (i=y+1; i<x; i++) {
            if (i%2 != 0) {
                soma += i;
            }
        }
    }

    else {
        for (i=x+1; i<y; i++) {
            if (i%2 != 0) {
                soma += i;
            }
        }
    }

    cout << "Soma dos impares: " << soma << endl;

    return 0;
}
