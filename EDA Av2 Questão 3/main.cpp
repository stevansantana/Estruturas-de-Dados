#include <iostream>

using namespace std;

struct no
{
    int info;
    struct no *Topo1;
    struct no *Topo2;
};

typedef struct no* noPtr;

void inserir (noPtr*);
void retirar (noPtr*);
void listar (noPtr);
bool listaVazia (noPtr);

int main()
{
    noPtr topo = NULL;

    int op;

    do
    {
        cin >> op;

        switch(op)
        {
        case 1:
            {
                inserir(&topo);
                break;
            }
        case 2:
            {
                retirar(&topo);
                break;
            }
        case 3:
            {
                listar(topo);
                break;
            }
        }

    }while(op!=0);
    return 0;
}

void inserir(noPtr*i)
{
    noPtr p = new no;

    cout << "\nDigite o valor do elemento:" <<  endl;
    cin >> p->info;

    p->Topo1 = NULL;

    if(listaVazia(*i))
    {
        p->Topo2 = NULL;
    }
    else
    {
        p->Topo2 = *i;
        (*i)->Topo1 = p;
    }
    *i = p;
}

void retirar(noPtr  *i)
{
    noPtr p = *i;
    if(!listaVazia(*i))
    {
        if(p->Topo2 == NULL)
        {
            *i = NULL;
        }
        else
        {
            *i = p->Topo2;
            (*i)->Topo1 = NULL;
        }
        delete(p);
        cout << "\nO elemento foi retirado da lista!\n" << endl;
    }
    else
    {
        cout << "\n\nLista esta Vazia!\n" << endl;
    }
}

void listar(noPtr p)
{
    if(!listaVazia(p))
    {
        cout << "\nElementos da lista:" << endl;
        cout << "INICIO" << endl;

        while(p!=NULL)
        {
            cout << "-->" << p->info << endl;
            p = p->Topo2;
        }
        cout << "-->NULL" << endl;
    }
    else
    {
        cout << "\n\nLista esta Vazia!" << endl;
    }
}

bool listaVazia(noPtr)
{
    //return ( Topo1 == NULL)? true : false;
    noPtr p;

    if(p==NULL)
    {
        return true;
    }
    else
    {
        false;
    }
}
