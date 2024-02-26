#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *direita, *esquerda;
}NoArv;

NoArv *inserir(NoArv *raiz, int num);
void imprimir(NoArv *raiz);
int quantidade_nos_folha(NoArv *raiz);

int main()
{
    NoArv *raiz = NULL;

    int opcao, valor;
    do
    {
        printf("\nMENU\n\n");
        printf("Aperte:\n\n");
        printf("0 - Para sair do programa.\n");
        printf("1 - Para inserir um no na arvore.\n");
        printf("2 - Para listar os nos da arvore.\n");
        printf("3 - Para ver a quantidade de nos folha da arvore.\n\n");

        scanf("%i", &opcao);

        switch(opcao)
        {
        case 0:
            {
                system("cls");
                printf("\nPrograma finalizado!\n");
                break;
            }
        case 1:
            {
                system("cls");
                printf("\nDigite um valor que sera inserido:\n\n");
                scanf("%i", &valor);
                 = inserir(raiz, valor);
                system("cls");
                break;
            }
        case 2:
            {

                imprimir(raiz);
                break;
            }
        case 3:
            {
                system("cls");
                printf("\nA quantidade de nos folha eh: %i\n\n", quantidade_nos_folha(raiz));
                system("pause");
                system("cls");
                break;
            }
        default:
            {
                system("cls");
                printf("\nDigito invalido! Digite novamente!\n");
                system("pause");
                system("cls");
                break;
            }
        }

    }while(opcao!=0);

    return 0;
}

void inserir(NoArv **raiz, int num)
{
    if(*raiz == NULL)
    {
        *raiz = malloc(sizeof(NoArv));
        (*raiz)->valor = num;
        (*raiz)->esquerda = NULL;
        (*raiz)->direita = NULL;
    }
    else
    {
        if(num < (*raiz)->valor)
        {

        }
    }
}

void imprimir(NoArv *raiz)
{
    if(raiz)
    {
        printf("%i ", raiz->valor);
        imprimir(raiz->esquerda);
        imprimir(raiz->direita);
    }
}

int quantidade_nos_folha(NoArv *raiz)
{
    if(raiz==NULL)
    {
        return 0;
    }
    else
    {
        if(raiz->esquerda==NULL && raiz->direita==NULL)
        {
            return 1;
        }
        else
        {
            return quantidade_nos_folha(raiz->esquerda) + quantidade_nos_folha(raiz->direita);
        }
    }
}
