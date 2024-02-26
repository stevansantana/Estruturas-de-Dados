#include <iostream>

using namespace std;

int fibonacci(int n);
int fatorial(int n);

int main()
{
    cout << "Informe o fatoria de um numero que voce deseja visualizar: ";
    int fat;
    cin >> fat;
    cout << "\nO fatorial do numero " << fat << " eh " << fatorial(fat) << endl;

    cout << "\nAgora informe a quantidade de numeros da sequencia de Fibonacci que voce deseja visualizar: ";
    int fib;
    cin >> fib;

    if(fib<=0)
    {
        cout << "\nSequencia Fibonacci invalida";
    }
    else
    {
        cout << "\nSequencia Fibonacci desejada: ";
        for(int i=0; i<fib; i++)
        {
            cout << fibonacci(i) << " ";
        }
    }
    cout << endl;

    return 0;
}

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        if(n==1 || n==2)
        {
            return 1;
        }
        else
        {
            return fibonacci(n-1) + fibonacci(n-2);
        }
    }
}

int fatorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fatorial(n-1);
    }
}
