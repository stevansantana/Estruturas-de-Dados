#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Informe o tamanho da lista de numeros inteiros: ";
    int tam;
    cin >> tam;

    int lista[tam];
    cout << "\nOs numeros da lista serao gerados automaticamente de 0 a 100." << endl;

    srand(time(NULL));
    for(int i=0; i<tam; i++)
    {
        lista[i] = rand()%100;
    }

    cout << "\nLista sem ordenacao:\n" << endl;
    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nLista ordenada em ordem crescente:\n" << endl;

    int chave, j;
    for(int i=1; i<tam; i++)
    {
        chave = lista[i];
        j=i-1;

        while(j>=0 && lista[j]>chave)
        {
            lista[j+1]=lista[j];
            j--;
        }
        lista[j+1]=chave;
    }

    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }
    return 0;
}
