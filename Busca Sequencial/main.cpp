/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "\nInforme a quantidade de elementos que a lista de numeros inteiros ira possuir: ";
    int qtd;
    cin >> qtd;
    int lista[qtd];

    cout << "\nOs numeros serao gerados de 0 a 100 automaticamente." << endl;

    srand(time(NULL));
    for(int i=0; i<qtd; i++)
    {
        lista[i]=rand()%100;
    }

    cout << "\nLista de numeros inteiros sem ordenacao:\n" << endl;
    for(int i=0; i<qtd; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nAgora informe qual elemento da lista voce quer visualizar posicao: ";
    int num;
    cin >> num;

    for(int i=0; i<qtd; i++)
    {
        if(lista[i]==num)
        {
            cout << "\nO numero " << num << " esta na posicao " << i+1 << " da lista de numeros inteiros." << endl;
            break;
        }
        if(i==qtd-1 && lista[i]!=num)
        {
            cout << "\nO elemento requerido " << num << "nao se encontra na lista de numeros inteiros." << endl;
        }
    }
    return 0;
}
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#define T 7

using namespace std;

void sequencial(int lista[], int x)
{
    bool achei=false;
    int i=0;

    while(!achei && i<T)
    {
        if(lista[i]==x)
        {
            achei=true;
            cout << "O numero " << x << " esta na posicao " << i+1 << " da lista." << endl;
        }
        else
        {
            i++;
        }
        if(i==T-1 && lista[i]!=x)
        {
            cout << "\nO numero requisitado " << x << " nao esta na lista." << endl;
        }
    }
}

int main()
{
    int lista[T];

    cout << "\nOs numeros da lista serao gerados automaticamente de 0 a 100.\n" << endl;

    srand(time(NULL));
    for(int i=0; i<T; i++)
    {
        lista[i]=rand()%100;
    }

    cout << "\nLista de numeros inteiros sem ordenacao:\n" << endl;
    for(int i=0; i<T; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nInforme o numero que deseja visualizar a posicao na lista: ";
    int num;
    cin >> num;

    cout << endl;
    sequencial(lista, num);

}
