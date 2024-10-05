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
    cin >> n;

    long long *a = new long long[n];
    long long *b = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> a[i];

    for (size_t i = 0; i < n; i++)
        b[n - i - 1] = a[i]; // se scrie a in b in ordine inversa

    PrintVec(b, n);

    delete[] a;
    delete[] b;
    return 0;
}