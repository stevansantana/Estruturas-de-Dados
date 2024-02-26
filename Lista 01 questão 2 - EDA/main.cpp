#include <iostream>

using namespace std;

void selectionSort(int vet[], int n);

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

    selectionSort(vetor, tam);
    cout << "\nArray ordenado:\n" << endl;

    for(int i=0; i<tam; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}

void selectionSort(int vet[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int menor=i, aux;
        for(int j=i+1; j<n; j++)
        {
            if(vet[menor]>vet[j])
            {
                menor=j;
            }
        }
        aux=vet[i];
        vet[i]=vet[menor];
        vet[menor]=aux;
    }
}
