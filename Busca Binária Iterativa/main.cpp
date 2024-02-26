#include <iostream>
#include <cstdlib>
#include <ctime>
#define T 7

using namespace std;

int buscaBinariaIterativa(int lista[], int fim, int chave);

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

    int res=buscaBinariaIterativa(lista, T, num);

    if(res==-1)
    {
        cout << "\nO valor requisitado nao esta lista." << endl;
    }
    else
    {
        cout << "\nO valor requisitado esta na lista e esta na posicao: " << res+1 << endl;
    }

    return 0;
}

int buscaBinariaIterativa(int lista[], int fim, int chave)
{
    int inicio=0;
    int meio=(inicio+fim)/2;

    while(fim>=inicio)
    {
        if(lista[meio]==chave)
        {
            return meio;
        }
        else
        {
            if(chave<lista[meio])
            {
                fim=meio-1;
            }
            else
            {
                inicio=meio+1;
            }
        }
        meio=(inicio+fim)/2;
    }
    return -1;
}
