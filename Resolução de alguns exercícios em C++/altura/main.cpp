#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pessoas;

    cout << "Quantas pessoas serao digitadas: ";
    cin >> pessoas;

    string nome[pessoas];
    int idade[pessoas];
    double altura[pessoas];
    int i, contMenores=0;
    double somaAltura=0, alturaMedia=0, porcentagem;

    for (i=0; i<pessoas; i++) {
        cout << "Dados da " << i+1 << "a pessoa: " << endl;

        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);

        cout << "Idade: ";
        cin >> idade[i];

        if (idade[i]<16){
            contMenores++;
        }

        cout << "Altura: ";
        cin >> altura[i];

        somaAltura += altura[i];
    }

    cout << fixed << setprecision(2); //definir a quantidade de casas decimais
    alturaMedia = somaAltura / pessoas;
    cout << "Altura Media: " << alturaMedia << endl;

    porcentagem = (contMenores*100)/pessoas;
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for (i=0; i<pessoas; i++) {
        if (idade[i]<16) {
            cout << nome[i] << endl;
        }
    }

    return 0;
}
