#include <iostream>

using namespace std;

void bubbleSort(int vet[], int tam);

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

    bubbleSort(vetor, tam);
    cout << "\nArray ordenado:\n" << endl;

    for(int i=0; i<tam; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}

void bubbleSort(int vet[], int tam)
{
    for(int i=0; i<tam-1; i++)
    {
        int aux;
        for(int j=i+1; j<tam; j++)
        {
            if(vet[i]>vet[j])
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
}
