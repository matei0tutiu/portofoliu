#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

void interchange(long long &a, long long &b)
{

    a += b;
    b = a - b;
    a -= b;
}

int main()
{
    size_t n, nrSchimb;

    cin >> n;
    long long *vec = new long long[n];

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    do
    {
        nrSchimb = 0;

        for (int i = 0; i < n - 1; i++)
            if (vec[i] > vec[i + 1])
            {
                interchange(vec[i], vec[i + 1]); // inversam elementele daca nu sunt in ordine
                nrSchimb++;                      // incrementam numarul de schimburi
            }

    } while (nrSchimb > 0);

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}