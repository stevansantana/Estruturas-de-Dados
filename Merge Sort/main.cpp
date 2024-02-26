#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void mergeSort(int lista[], int inicio, int fim);
void intercala(int lista[], int inicio, int fim, int meio);
int tam;

int main()
{
    cout << "Informe a quantidade de elementos da lista de numeros inteiros: ";
    cin >> tam;

    int listaNumerosInteiros[tam];
    cout << "\nOs elementos serao gerados de 0 a 100 automaticamente.\n" << endl;

    srand(time(NULL));
    for(int i=0; i<tam; i++)
    {
        listaNumerosInteiros[i]=rand()%100;
    }

    cout << "\nLista de numeros inteiros sem ordenacao.\n" << endl;
    for(int i=0; i<tam; i++)
    {
        cout << listaNumerosInteiros[i] << endl;
    }

    cout << "\nLista de numeros inteiros ordenados em ordem crescente:\n" << endl;
    mergeSort(listaNumerosInteiros, 0, tam-1);

    for(int i=0; i<tam; i++)
    {
        cout << listaNumerosInteiros[i] << endl;
    }
    return 0;
}

void mergeSort(int lista[], int inicio, int fim)
{
    int meio;
    if(inicio<fim)
    {
        meio=(inicio+fim)/2;
        mergeSort(lista, inicio, meio);
        mergeSort(lista, meio+1, fim);
        intercala(lista, inicio, fim, meio);
    }
}

void intercala(int lista[], int inicio, int fim, int meio)
{
    int aux[tam], aux_indice=inicio, indice_sub_lista1=inicio, indice_sub_lista2=meio+1;

    while(indice_sub_lista1<=meio && indice_sub_lista2<=fim)
    {
        if(lista[indice_sub_lista1]>lista[indice_sub_lista2])
        {
            aux[aux_indice]=lista[indice_sub_lista2];
            indice_sub_lista2++;
        }
        else
        {
            aux[aux_indice]=lista[indice_sub_lista1];
            indice_sub_lista1++;
        }
        aux_indice++;
    }

    for(int i=indice_sub_lista1; i<=meio; i++)
    {
        aux[aux_indice]=lista[i];
        aux_indice++;
    }
    for(int i=indice_sub_lista2; i<=fim; i++)
    {
        aux[aux_indice]=lista[i];
        aux_indice++;
    }
    for(int i=inicio; i<=fim; i++)
    {
        lista[i]=aux[i];
    }
}
