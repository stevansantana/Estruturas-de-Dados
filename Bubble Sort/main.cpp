#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tam;
    cout << "Informe a quantidade de elementos da lista de numeros inteiros: ";
    cin >> tam;

    int lista[tam];

    cout << "\nOs elementos vao ser gerados automaticamente." << endl;
    srand(time(NULL));

    for(int i=0; i<tam; i++)
    {
        lista[i] = rand()%100;
    }

    cout << "\nLista de numeros inteiros sem ordenacao:\n" << endl;

    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nLista de numeros inteiros ordenados de forma crescente:\n" << endl;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(lista[i]>lista[j])
            {
                int aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nLista de numeros inteiros ordenados de forma decrescente:\n" << endl;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(lista[i]<lista[j])
            {
                int aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }
    return 0;
}
