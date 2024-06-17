#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x=0, y=1;

    while (x != y) {
        cout << "Primeiro valor: ";
        cin >> x;

        cout << "Segundo valor: ";
        cin >> y;

        if (x>y){
            cout << "DECRESCENTE!" << endl;
        }

        else if (x<y){
            cout << "CRESCENTE!" << endl;
        }
    }

    return 0;
}
