// NOME: STEVAN SANTANA DOS SANTOS
// MATRÍCULA: 2022403BCC

#include <iostream>

using namespace std;

void inserir();
void remover();
bool listaVazia();
void imprimir();

struct buffer{

        int cod;
        struct buffer *prox;
};

typedef struct buffer *pacotes;
pacotes topo = NULL;
pacotes ultimo = NULL;

int main()
{
    int x;

    do
    {
        cout << "\nMENU\n" << endl;
        cout << "Aperte:\n" << endl;
        cout << "0 - Para sair do programa." << endl;
        cout << "1 - Para inserir o codigo do pacote na lista de impressao." << endl;
        cout << "2 - Para imprimir pacote(s).\n" << endl;

        cin >> x;

        switch(x)
        {
        case 0:
            {
                system("cls");
                cout << "\nPrograma finalizado!" << endl;
                break;
            }
        case 1:
            {
                system("cls");
                inserir();
                break;
            }
        case 2:
            {
                system("cls");
                imprimir();
                remover();
                break;
            }
        default:
            {
                system("cls");
                cout << "\nDigito invalido! Digite novamente!\n" << endl;
                system("pause");
                system("cls");
                break;
            }
        }

    }while(x!=0);

    return 0;
}

void inserir()
{
    pacotes p = new buffer;

    cout << "\nInforme o codigo do pacote:" << endl;
    cin >> p->cod;
    system("cls");

    p->prox = NULL;

    if(listaVazia())
    {
        topo=p;
    }
    else
    {
        ultimo->prox = p;
    }
    ultimo = p;
}

void remover()
{
    pacotes p;

    if(listaVazia())
    {
        cout << "\nO Buffer esta vazio!" << endl;
        cout << "Se quiser, aperte 1 para inserir pacotes na lista de impressao.\n" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        p = topo;
        system("pause");
        cout << "\nO pacote "<< p->cod << " foi retirado da lista!" << endl << endl;
        system("pause");
        system("cls");
        topo = p->prox;
        delete p;
    }
}

bool listaVazia()
{
    if(topo)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void imprimir()
{
    pacotes p = topo;

    if(!listaVazia())
    {
        cout << "\nO(s) pacote(s) que estao na lista sao:" << endl;
        cout << "\nINICIO --> ";
        while(p != NULL)
        {
            cout << p->cod << " --> ";
            p = p->prox;
        }
        cout << "FIM\n\n";
    }

}
