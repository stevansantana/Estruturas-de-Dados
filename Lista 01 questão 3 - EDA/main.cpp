#include <iostream>

using namespace std;

void insertionSort(int vet[], int n);

int main()
{

    //Complexidade de pior caso do algoritmo que será desenvolvido: O(n²)

    cout << "Informe o tamanho do array: ";
    int tam;
    cin >> tam;

    int vetor[tam];
    cout << "\nInforme os elementos deste array:\n" << endl;

    for(int i=0; i<tam; i++)
    {
        cin >> vetor[i];
    }

    insertionSort(vetor, tam);
    cout << "\nArray ordenado:\n" << endl;

    for(int i=0; i<tam; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}

void insertionSort(int vet[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int aux;
        for(int j=i+1; j>0; j--)
        {
            if(vet[j]<vet[j-1])
            {
                aux=vet[j];
                vet[j]=vet[j-1];
                vet[j-1]=aux;
            }
        }
    }
}

