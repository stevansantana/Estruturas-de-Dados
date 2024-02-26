#include <iostream>

using namespace std;

int aux=0;

struct Carro
{
    string nome;
    string cor;
    int potencia;
    int velMax;
    int vel=0;

    void insere()
    {
        cout << "\nInforme o nome do carro " << ++aux << ": ";
        cin >> nome;
        cout << "\nAgora informe a cor, a potencia e a velocidade maxima do " << nome << ", respectivamente:\n" << endl;

        cout << "Cor: ";
        cin >> cor;
        cout << "Potencia: ";
        cin >> potencia;
        cout << "Velocidade maxima: ";
        cin >> velMax;
    }

    void mostrar()
    {
        cout << "\nInformacoes do carro " << nome << ":\n" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Cor: " << cor << endl;
        cout << "Potencia: " << potencia  << endl;
        cout << "Velocidade maxima: " << velMax << endl;
        cout << "Velocidade: " << vel << endl;
    }

    void altera(int altera_vel)
    {
        vel=altera_vel;

        if(vel>velMax)
        {
            vel=velMax;
        }
        if(vel<0)
        {
            vel=0;
        }
    }
};

int main()
{
    cout << "\nBem vindo a nossa Concessionaria de carros.\n" << endl;
    cout << "Informe a quantidade de carros que deseja utilizar: ";
    int qtd;
    cin >> qtd;

    while(qtd<1)
    {
        cout << "\nDigito invalido, informe novamente: ";
        cin >> qtd;
    }
    cout << "\nDigito valido!" << endl;

    Carro *carros=new Carro[qtd];
    for(int i=0; i<qtd; i++)
    {
        carros[i].insere();
    }

    cout << "\n\t\t\t\t\tInformacoes do(s) seu(s) carro(s):" << endl;
    for(int i=0; i<qtd; i++)
    {
        carros[i].mostrar();
    }

    cout << "\nVoce quer alterar a velocidade de um dos carros? [0(sim) / 1(nao)]" << endl;
    int op;
    cout << "\nDigite 0 para sim ou 1 para nao: ";

    do
    {
        cin >> op;
        switch(op)
        {
        case 0:
            {
                cout << "\nInforme o nome do carro que deseja alterar a velocidade: ";
                string nome;
                cin >> nome;

                for(int i=0; i<qtd; i++)
                {
                    if(nome==carros[i].nome)
                    {
                        cout << "\nA velocidade do carro " << nome << " sera alterada. Informe a nova velocidade do carro " << nome << ":" << endl;
                        int novaVel;
                        cout << "\nNova velocidade: ";
                        cin >> novaVel;
                        carros[i].altera(novaVel);

                        cout << "\nInformacoes do carro " << nome << " com alteracao na sua velocidade:" << endl;
                        carros[i].mostrar();
                        break;
                    }
                    if(i==qtd-1 && nome!=carros[i].nome)
                    {
                        cout << "\nO carro " << nome << " nao esta na sua lista de carros." << endl;
                    }
                }
                break;
            }
        case 1:
            {
                cout << "\nVoce optou por nao alterar a velocidade de nenhum dos seus carros." << endl;
                break;
            }
        default:
            {
                cout << "\nInformacao invalidada, digite 0(sim) ou 1(nao)." << endl;
                break;
            }
        }

    }while(op!=0 && op!=1);


    cout << "\nInforme o nome de qualquer um dos seus carros para ver a sua posicao na sua lista de carros: ";
    string nome;
    cin >> nome;

    for(int i=0; i<qtd; i++)
    {
        if(nome==carros[i].nome)
        {
            cout << "\nO carro " << nome << " esta na posicao " << i+1 << " da sua lista de carros." << endl;
            break;
        }
        if(i==qtd-1 && nome!=carros[i].nome)
        {
            cout << "\nO carro " << nome << " nao esta na sua lista de carros." << endl;
        }
    }
    return 0;
}
