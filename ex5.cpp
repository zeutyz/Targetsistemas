#include<iostream>
#include<string>
using namespace std;

void invert(string *str);

int main()
{
    string str;
    string invertedStr;
    getline(cin, str);
    invertedStr = str;
    invert(&invertedStr);
    cout << "String inserida: " << str << "\nString invertida: " << invertedStr << endl ;

    return 0;
}

void invert(string *str)
{
    int n = str->size();
    for (int i = 0; i < n / 2; i++) {
        swap((*str)[i], (*str)[n - 1 - i]); 
    }
}