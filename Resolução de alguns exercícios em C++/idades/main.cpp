#include <bits/stdc++.h> //biblioteca universal

using namespace std;

int main()
{
    string nome1, nome2;
    double idade1, idade2;
    double idadeMedia=0;

    cout << "Dados da primeira pessoa:" << endl;
    cout << "Nome: ";
    getline(cin,nome1); //como esse é o primeiro dado, não precisa da limpeza de buffer

    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa:" << endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n'); //limpeza de buffer: é usado quando o programa já tiver lido outro dado e tiver uma quebra de linha pendente
    getline (cin, nome2);      //aqui a limpeza de buffer é obrigatória

    cout << "Idade: ";
    cin >> idade2;

    idadeMedia = (idade1+idade2)/2;

    cout << "A idade media de " << nome1 << " e " << nome2 << " e de " << idadeMedia << " anos." << endl;

    return 0;
}
