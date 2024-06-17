#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    while (n<0 || n>10) {
        cout << "Valor invalido! Tente novamente: ";
        cin >> n;
    }

    int mat[n][n];
    int i, j, contNegativos=0;

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "Diagonal Principal: " << endl;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i==j) {
                cout << mat[i][j] << " ";
            }
        }
    }

    cout << endl;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (mat[i][j]<0) {
                contNegativos++;
            }
        }
    }
    cout << "Quantidade de negativos: " << contNegativos << endl;

    return 0;
}
