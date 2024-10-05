#include <iostream>
using namespace std;

void interchange(long long &a, long long &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

int main()
{

    size_t n;
    cin >> n;

    long long *vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    PrintVec(vec, n);

    for (size_t i = 0; i < n - i - 1; i++)   // se trece prin vector in perechi de indici de forma (i, n - i - 1)
        interchange(vec[i], vec[n - i - 1]); // se interschimba numerele intre ele

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}