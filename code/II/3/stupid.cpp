#include <iostream>
using namespace std;

void interschimb(long long &a, long long &b)
{

    a += b;
    b = b - a;
    a -= b;
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

    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (vec[i] > vec[j])
                interschimb(vec[i], vec[j]); // daca elementele nu sunt in ordine, le schimbam
        }
    }

    PrintVec(vec, n);

    return 0;
}