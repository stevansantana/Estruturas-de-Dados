// Função que mostra os valores em ordem crescente de uma árvore binária de busca.
// A complexidade de pior caso dessa função é O(n).

/*
void listarEmOrdemCrescente(noPtr p)
{
    if(!enderecoVazio(p))
    {
        listar(p->esquerda);
        cout << " " << p->info;
        listar(p->direita);
    }
}
*/

#include <iostream>

using namespace std;

struct no
{
    int info;
    struct no *esquerda, *direita;
};

typedef struct no *noPtr;

void listarEmOrdemCrescente(noPtr p); //Função que mostra os valores em ordem crescente de uma árvore binária de busca.
int menu();
bool enderecoVazio(noPtr p);
void inserir(noPtr *p, int x);

int main()
{
    int op, x;

    noPtr raiz = NULL;

    do
    {
        op = menu();

        switch(op)
        {
        case 0:
            {
                cout << "\n Programa finalizado!" << endl;
                break;
            }
        case 1:
            {
                cout << "\n Elemento a inserir:\n" << endl;
                cin >> x;
                system("cls");
                inserir(&raiz, x);
                break;
            }
        case 2:
            {
                if(raiz == NULL)
                {
                    cout << "\n A arvore binaria nao possui no(s), aperte 1 no menu para inserir elementos";
                }
                else
                {
                    cout << "\n No(s) da arvore binaria:\n" << endl;
                }
                listarEmOrdemCrescente(raiz);
                cout << endl << endl;;
                system("pause");
                system("cls");
                break;
            }
        default:
            {
                cout << "\n Digito invalido!" << endl;
                cout << " Digite novamente" << endl << endl;

                system("pause");
                system("cls");
                break;
            }
        }

    }while(op!=0);
    return 0;
}

// Função que mostra os valores em ordem crescente de uma árvore binária de busca.
void listarEmOrdemCrescente(noPtr p)
{
    if(!enderecoVazio(p))
    {
        listarEmOrdemCrescente(p->esquerda);
        cout << " " << p->info;
        listarEmOrdemCrescente(p->direita);
    }
}

int menu()
{
    int opcao;

    cout << "\n\n Menu Principal\n" << endl;

    cout << " 0 - Sair" << endl;
    cout << " 1 - Inserir no na arvore" << endl;
    cout << " 2 - Listar todos os nos da arvore em ordem crescente" << endl;
    cout << "\n Digite uma opcao:\n" << endl;

    cin >> opcao;
    system("cls");
    return opcao;
}

bool enderecoVazio(noPtr p)
{
    if(p)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void inserir(noPtr *p, int x)
{
    if(enderecoVazio(*p))
    {
        *p = new no;
        (*p)->info = x;
        (*p)->esquerda = NULL;
        (*p)->direita = NULL;
    }
    else
    {
        if(x<((*p)->info))
        {
            inserir(&((*p)->esquerda), x);
        }
        else
        {
            inserir(&((*p)->direita), x);
        }
    }
}
