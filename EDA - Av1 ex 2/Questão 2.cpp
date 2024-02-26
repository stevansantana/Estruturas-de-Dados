//QUESTÃO 2

#include <iostream>

using namespace std;

void insertionSort(int vet[], int n);

int main()
{
    int vetor[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "VETOR SEM ORDENACAO:\n" << endl;
    for(int i=0; i<10; i++)
    {
        cout << vetor[i] << endl;
    }

    insertionSort(vetor, 10);
    cout << "\nVETOR ORDENADO DE MANEIRA CRESCENTE:\n" << endl;

    for(int i=0; i<10; i++)
    {
        cout << vetor[i] << endl;
    }

    cout << "\nA complexidade desse algoritmo Insertion Sort que foi utilizado eh de pior caso, e eh O(n^2)." << endl;
    return 0;
}

//Algoritmo Insertion Sort com complexidade de pior caso O(n^2)

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


