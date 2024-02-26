//QUESTÃO 1

#include <iostream>

using namespace std;

void bubbleSort(int vet[], int n);

int main()
{
    int vetor[10];

    cout << "Informe 10 elementos quaisquer para o vetor que sera ordenado:\n" << endl;
    for(int i=0; i<10; i++)
    {
        cin >> vetor[i];
    }

    bubbleSort(vetor, 10);
    cout << "\nVETOR ORDENADO DE MANEIRA CRESCENTE\n" << endl;

    for(int i=0; i<10; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}

//Algoritmo Bubble Sort com complexidade de melhor caso O(n)

void bubbleSort(int vet[], int n)
{
    bool flag=true;

    for(int i=0; i<n-1 && flag==true; i++)
    {
        flag=false; // quando não há trocas, flag continuará false
        int aux;

        for(int j=0; j<n-i-1; j++)
        {
            if(vet[j]>vet[j+1])
            {
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
                flag=true; // troca realizada, flag = true
            }
        }
    }
}
