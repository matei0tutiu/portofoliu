#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

int main()
{
    size_t n;
    long long nMax, pozitie, x, *vec;
    cin >> nMax;
    cin >> n;
    vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    cin >> pozitie;
    cin >> x;

    for (size_t i = n; i > pozitie; i--)
        vec[i] = vec[i - 1]; // mutam o portiune a vectorului la dreapta cu o pozitie
    vec[pozitie] = x;        // inseram in pozitia libera elementul
    n++;                     // crestem marimea vectorului

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}