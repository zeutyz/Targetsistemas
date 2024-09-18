#include<iostream>
#include <iomanip>
using namespace std;

double average(double vec[], int nElements);
int daysAboveAvarage(double vec[], int size, double avarage);
int checkLowest(double vec[], int size);
void merge(double vec[], int left, int middle, int right);
void mergeSort(double vec[], int left, int right);

int main()
{

    double vec[30] = {
        22174.1664, 24537.6698, 26139.6134, 0.0, 0.0,
        26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722,
        0.0, 0.0, 3847.4823, 373.7838, 2659.7563,
        48924.2448, 18419.2614, 0.0, 0.0, 35240.1826,
        43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0,
        0.0, 25681.8318, 1718.1221, 13220.495, 8414.61
    };
   
    mergeSort(vec, 0, 29);
    cout << fixed << setprecision(4);
    cout << "\n\nO menor valor de faturamento foi: " << vec[checkLowest(vec, 30)] << endl;
    cout << "O maior valor de faturamento foi: " << vec[29] << endl;
    cout << "Numero de dias no mes em que o valor de faturamento diario foi superior a media mensal: " << daysAboveAvarage(vec, 30, average(vec, 30)) << "\n\n";

    return 0;
}

double average(double vec[], int nElements)
{

    int sum = 0;
    int aux = 0;

    for (int i = 0; i < nElements; i++)
    {
        if (vec[i] != 0)
        {
            sum += vec[i];
            aux ++;
        }        
    }

    return sum/aux;
}

int daysAboveAvarage(double vec[], int size, double avarage)
{
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        if (vec[i] > avarage)
        {
            n++;
        }
    }
    return n;
}

int checkLowest(double vec[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (vec[i] > 0)
        {
            return i;
        }
        
    }
    
    return -1;
}

void merge(double vec[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    double L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = vec[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[middle + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        } else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(double vec[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(vec, left, middle);
        mergeSort(vec, middle + 1, right);
        merge(vec, left, middle, right);
    }
}
