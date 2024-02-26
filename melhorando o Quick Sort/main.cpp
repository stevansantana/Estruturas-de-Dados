#include <iostream>

using namespace std;

void quickSort(int vetor[], int inicio, int fim);
void troca(int *x, int *y);

int main()
{
    int vetor[2];

    for(int i=0; i<2; i++)
    {
        cout << "Informe o elemento " << i+1 << ": ";
        cin >> vetor[i];
    }

    quickSort(vetor, 0, 1);
    cout << endl;

    for(int i=0; i<2; i++)
    {
        cout << vetor[i] << "\t";
    }

    return 0;
}

void quickSort(int vetor[], int inicio, int fim)
{
    int i, j, pivo;

    if((fim-inicio)<2)
    {
        if((fim-inicio)==1)
        {
            if(vetor[inicio]>vetor[fim])
            {
                troca(&vetor[inicio], &vetor[fim]);
            }
        }
    }
    else
    {
        i=inicio;
        j=fim;
        pivo=vetor[inicio];

        while(j>i)
        {
            i++;
            while(vetor[i]<=pivo)
            {
                i++;
            }
            while(vetor[j]>pivo)
            {
                j--;
            }
            if(j>i)
            {
                troca(&vetor[i], &vetor[j]);
            }
        }
        troca(&vetor[inicio], &vetor[j]);

        quickSort(vetor, inicio, j-1);
        quickSort(vetor, j+1, fim);
    }
}

void troca (int *x, int *y)
{
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}
