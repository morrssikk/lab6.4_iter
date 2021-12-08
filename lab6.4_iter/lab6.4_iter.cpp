#include <iostream>
#include <iomanip>

using namespace std;

void Filling(int*& a, const int size, int Min, int Max);
void Sum(int* list, const int size, int& sumEl, int& indexMax);
void Mult(int* list, const int size, int& mul);
void Print(int* list, const int size);

int main()
{


    srand((unsigned)time(NULL));


    int n, leftLimit, rightLimit;
    cout << "n: "; cin >> n;
    cout << "Left limit: "; cin >> leftLimit;
    cout << "Right limit: "; cin >> rightLimit;

    int* a;

    int Min = leftLimit;
    int Max = rightLimit;
    int MaxItemI = 0;
    int sum = 0;
    int count = 0;
    int mul = 1;

    Filling(a, n, Min, Max);
    cout << "Before:"; Print(a, n);


    Sum(a, n, sum, MaxItemI);


    cout << "After:  ";
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";
    cout << " " << endl;
    cout << "Sum : " << sum << endl;

    Mult(a, n, mul);
    cout << "Mult: " << setw(4) << mul << endl;




    delete[] a;
}



void Filling(int*& a, const int size, int Min, int Max)
{
    a = new int[size];
    for (int i = 0; i < size; i++)
        a[i] = (Max - Min) * rand() / RAND_MAX + Min;
}



void Sum(int* list, const int size, int& sum, int& indexMax)
{
    for (int i = 0; i < size; i++)
        if ((list[i]) > (list[indexMax]))
            indexMax = i;

    for (int i = 0; i < indexMax; i++)
    {
        sum += list[i];
    }
}



void Mult(int* list, const int size, int& mul) {
    for (int i = 0; i < size; i++)
    {
        if (list[i]< 0) {
            mul *= list[i];
            
        }
    }
}

void Print(int* list, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << list[i];
    cout << endl;
}