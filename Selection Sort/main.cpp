/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tam;
    cout << "Informe a quantidade de elementos da lista de numeros inteiros:" << endl;
    cin >> tam;

    int lista[tam];

    cout << "\nOs elementos serao gerados automaticamente de 1 a 100." << endl;
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

    cout << "\nLista de numeros inteiros ordenados em ordem crescente:\n" << endl;
    for(int i=0; i<tam-1; i++)
    {
        int menor=i;
        for(int j=i+1; j<tam; j++)
        {
            if(lista[menor]>lista[j])
            {
                menor=j;
            }
        }
        int aux=lista[i];
        lista[i]=lista[menor];
        lista[menor]=aux;
    }
    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nLista de numeros inteiros ordenados em ordem decrescente:\n" << endl;
    for(int i=0; i<tam-1; i++)
    {
        int maior=i;
        for(int j=i+1; j<tam; j++)
        {
            if(lista[maior]<lista[j])
            {
                maior=j;
            }
        }
        int aux=lista[i];
        lista[i]=lista[maior];
        lista[maior]=aux;
    }
    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }
    return 0;
}
*/

#include <iostream>

using namespace std;

void bubbleSort(int lista[], int n);
void selectionSort(int lista[], int n);

int main()
{
    int tam;
    cout << "Informe o tamanho da lista de numeros inteiros: ";
    cin >> tam;

    int lista[tam];
    cout << "\nAgora informe cada numero que essa lista ira possuir:\n" << endl;
    for(int i=0; i<tam; i++)
    {
        cin >> lista[i];
    }

    cout << "\nLista nao ordenada:\n" << endl;
    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nLista ordenada - Bubble Sort\n" << endl;
    bubbleSort(lista, tam);

    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nLista ordenada - Selection Sort\n" << endl;
    selectionSort(lista, tam);

    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }
    return 0;
}

void bubbleSort(int lista[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(lista[i]>lista[j])
            {
                int aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
        }
    }
}

void selectionSort(int lista[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int maior=i;
        for(int j=i+1; j<n; j++)
        {
            if(lista[maior]<lista[j])
            {
                maior=j;
            }
        }
        int aux=lista[i];
        lista[i]=lista[maior];
        lista[maior]=aux;
    }
}
