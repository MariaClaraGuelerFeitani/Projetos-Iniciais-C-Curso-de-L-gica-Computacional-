#include <bits/stdc++.h> // biblioteca universal, se colocar ela n�o precisa ficar adicionando outros tipos de bibliotecas

using namespace std; // sem isso, cout e cin, por exemplo, n�o funcionam

int main()
{
    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;

    cout << "Altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = (2*base) + (2*altura);
    diagonal = sqrt((pow(base, 2))+(pow(altura, 2)));

    cout << fixed << setprecision(4); // fixa a quantidade de casas decimais
    cout << "Area: " << area << endl; //endl significa final de linha (tipo \n)
    cout << "Perimetro: " << perimetro << endl;
    cout << "Diagonal: " << diagonal << endl;

    return 0;
}
