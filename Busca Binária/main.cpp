#include <iostream>
#include <cstdlib>
#include <ctime>
#define T 7

using namespace std;

int buscaBinaria(int lista[], int inicio, int fim, int num);

int main()
{
    cout << "Os numeros serao gerados de forma aleatoria de 0 a 100." << endl;

    int lista[T];

    srand(time(NULL));
    for(int i=0; i<T; i++)
    {
        lista[i]=rand()%100;
    }

    cout << "\nLista sem ordenacao:\n" << endl;

    for(int i=0; i<T; i++)
    {
        cout << lista[i] << endl;
    }

    for(int i=0; i<T-1; i++)
    {
        for(int j=i+1; j<T; j++)
        {
            if(lista[i]>lista[j])
            {
                int aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
        }
    }

    cout << "\nLista ordenada de forma crescente:\n" << endl;
    for(int i=0; i<T; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nInforme o numero que deseja ver a posicao: ";
    int num;
    cin >> num;

    int res=buscaBinaria(lista, 0, T, num);

    if(res==-1)
    {
        cout << "\nO elemento requerido nao esta na lista." << endl;
    }
    else
    {
        cout << "\nO elemento requerido esta na posicao: " << res+1 << endl;
    }

    return 0;
}

int buscaBinaria(int lista[], int inicio, int fim, int num)
{
    if(fim>=inicio)
    {
        int meio=(inicio+fim)/2;

        if(lista[meio]==num)
        {
            return meio;
        }
        else
        {
            if(num<lista[meio])
            {
                return buscaBinaria(lista, inicio, meio-1, num);
            }
            else
            {
                return buscaBinaria(lista, meio+1, fim, num);
            }
        }
    }
    return -1;
}
