#include <iostream>
using namespace std;

int main()
{
    int indice = 13;
    int soma = 0;
    int k = 0;
    while (k < indice)
    {
        cout << k << "\n\n";
        k = k + 1;
        soma = soma + k;
        cout << "soma = " << soma << "\n";
    }

    cout << soma;
    return 0;
}