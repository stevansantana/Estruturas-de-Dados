#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void quickSort(int lista[], int inicio, int fim);
void troca(int* x, int* y);
int tam;

int main()
{
    cout << "Informe a quantidade de numeros inteiros que a lista ira possuir: " << endl;
    cin >> tam;

    int lista[tam];
    cout << "\nOs numeros serao gerados automaticamente de 0 a 100.\n" << endl;

    srand(time(NULL));
    for(int i=0; i<tam; i++)
    {
        lista[i]=rand()%100;
    }

    cout << "\nLista de numeros inteiros sem ordenacao:\n" << endl;
    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }

    cout << "\nLIsta de numeros inteiros ordenada em ordem crescente:\n" << endl;
    quickSort(lista, 0, tam-1);

    for(int i=0; i<tam; i++)
    {
        cout << lista[i] << endl;
    }
    return 0;
}

void quickSort(int lista[], int inicio, int fim)
{
    int chave, indiceMenorChave, indiceMaiorChave;

    if(fim-inicio<2)
    {
        if((fim-inicio)==1)
        {
            if(lista[inicio]>lista[fim])
            {
                troca(&lista[inicio], &lista[fim]);
            }
        }
    }
    else
    {
        chave=lista[inicio];
        indiceMenorChave=inicio;
        indiceMaiorChave=fim;

        while(indiceMaiorChave>indiceMenorChave)
        {
            indiceMenorChave++;

            while(lista[indiceMenorChave]<chave)
            {
                indiceMenorChave++;
            }
            while(lista[indiceMaiorChave]>chave)
            {
                indiceMaiorChave--;
            }
            if(indiceMaiorChave>indiceMenorChave)
            {
                troca(&lista[indiceMenorChave], &lista[indiceMaiorChave]);
            }
        }
        troca(&lista[inicio], &lista[indiceMaiorChave]);
        quickSort(lista, inicio, indiceMaiorChave-1);
        quickSort(lista, indiceMaiorChave+1, fim);
    }
}
void troca(int *x, int *y)
{
    int aux=*x;
    *x=*y;
    *y=aux;
}
