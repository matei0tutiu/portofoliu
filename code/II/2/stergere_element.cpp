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
    long long nMax, pozitie, *vec;
    cin >> nMax;
    cin >> n;
    vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    cin >> pozitie;
    for (size_t i = pozitie; i < n - 1; i++)
        vec[i] = vec[i + 1]; // se copiaza o portiune a vectorului la stanga cu o pozitie
    n--;                     // scadem marimea vectorului

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}