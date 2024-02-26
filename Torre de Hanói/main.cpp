#include <iostream>

using namespace std;

void torreDeHanoi(int d, char ori, char dest, char aux)
{
    if(d==1)
    {
        cout << "Mover disco " << d << " de " << ori << " para " << dest << endl;
    }
    else
    {
        torreDeHanoi(d-1, ori, aux, dest);
        cout << "Mover disco " << d << " de " << ori << " para " << dest << endl;
        torreDeHanoi(d-1, aux, dest, ori);
    }
}

int main()
{
    cout << "\nInforme a quantidade de discos que a torre de hanoi ira possui: ";
    int discos;
    cin >> discos;

    while(discos<1)
    {
        cout << "\nValor invalido, informe novamente: ";
        cin >> discos;
    }

    cout << endl;
    torreDeHanoi(discos, 'A', 'C', 'B');

    return 0;
}
