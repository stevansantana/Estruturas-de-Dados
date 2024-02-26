// NOME: STEVAN SANTANA DOS SANTOS
// MATRÍCULA: 2022403BCC

// O algoritmo de ordenação que está sendo utilizado é o Merge Sort.
// A sua complexidade de pior caso é O(n log n).

/*
 Eu escolhi utiliza-lo ao invés do Quick Sort porque a sua complexidade de pior caso O(n log n)
 é melhor que a do Quick Sort que é O(n^2).
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void mergeSort(int vetor[], int inicio, int fim);
void intercala(int vetor[], int inicio, int fim, int meio);
void listarLista(int vet[], int n);

int main()
{
    srand(time(0));

    int lista[20];

    for(int i=0; i<20; i++)
    {
        lista[i] = rand();
    }

    cout << "\n\t\t\t\t\tElementos ja inseridos na lista" << endl;
    int x;

    do
    {
        cout << "\nMENU\n" << endl;
        cout << "Aperte:\n" << endl;
        cout << "0 - Para sair do programa." << endl;
        cout << "1 - Para ordenar em ordem crescente os elementos da lista." << endl;
        cout << "2 - Para listar todos os elementos da lista.\n" << endl;
        cin >> x;

        switch(x)
        {
        case 0:
            {
                system("cls");
                cout << "\nPrograma finalizado." << endl;
                break;
            }
        case 1:
            {
                mergeSort(lista, 0, 19);
                system("cls");
                cout << "\nLista ordenada em ordem crescente!" << endl;
                cout << "Se quiser, aperte 2 no menu para conferir a lista ordenada.\n" << endl;
                system("pause");
                system("cls");
                break;
            }
        case 2:
            {
                system("cls");
                cout << "\nElementos da lista:\n" << endl;
                listarLista(lista, 20);
                break;
            }
        default:
            {
                cout << "\nDigito invalido! Informe novamente:" << endl;
                break;
            }

        }
    }while(x!=0);
}

void listarLista(int vet[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << vet[i] << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
}

void mergeSort(int vetor[], int inicio, int fim)
{
    if(inicio<fim)
    {
        int meio = (inicio+fim)/2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio+1, fim);
        intercala(vetor, inicio, fim, meio);
    }
}

void intercala(int vetor[], int inicio, int fim, int meio)
{
    int aux[20], indice_aux = inicio, inicio1 = inicio, inicio2 = meio+1;

    while(inicio1<=meio && inicio2<=fim)
    {
        if(vetor[inicio1]>vetor[inicio2])
        {
            aux[indice_aux]=vetor[inicio2];
            inicio2++;
        }
        else
        {
            aux[indice_aux]=vetor[inicio1];
            inicio1++;
        }
        indice_aux++;
    }

    for(int i=inicio1; i<=meio; i++)
    {
        aux[indice_aux] = vetor[i];
        indice_aux++;
    }

    for(int i=inicio2; i<=fim; i++)
    {
        aux[indice_aux] = vetor[i];
        indice_aux++;
    }

    for(int i=inicio; i<=fim; i++)
    {
        vetor[i] = aux[i];
    }
}
