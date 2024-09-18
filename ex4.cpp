#include<iostream>
#include<string>
using namespace std;

int main()
{
    string distributorsNames[5] = {"SP", "RJ", "MG", "ES", "Outros"};
    double distributorsValues[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    double total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += distributorsValues[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << distributorsNames[i] << " possui " << 100 * distributorsValues[i] / total << "% de representacao." << endl;
    }
    
    return 0;
}