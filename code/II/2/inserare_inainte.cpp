#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

void InsertElement(long long *vec, size_t &size, const size_t &pozitie, const unsigned long long &element)
{
    for (int i = size; i > pozitie; i--)
        vec[i] = vec[i - 1];
    vec[pozitie] = element;
    size++;
}

int main()
{
    size_t n, nMax;
    long long tinta, element, *vec;
    cin >> nMax;
    cin >> n;
    vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    cin >> tinta;
    cin >> element;

    for (unsigned long long i = 1; i < n; i++)
        if (vec[i] == tinta)
            InsertElement(vec, n, i - 1, element); // daca numarul curent e egal cu tinta, se insereaza inaintea lui elementul

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}