#include <iostream>
using namespace std;

int fib(int n);
bool verifyNum(int n);

int main()
{
    int n;
    cout << "Entre com o numero para a busca: ";
    cin >> n;
    if (verifyNum(n))
    {
        cout << "o numero " << n << " pertece a sequencia fibonacci" << endl;
    }
    else
    {
        cout << "o numero " << n << " nao pertece a sequencia fibonacci" << endl;
    }
    
    
    return 0;
}

int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

bool verifyNum(int n)
{
    int i = 0;
    while (true)
    {
        if (n == fib(i)) return true;
        if (n < fib(i)) return false;
        i++;
    }
    
    return false;
}