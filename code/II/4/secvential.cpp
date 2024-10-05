#include <iostream>
using namespace std;

int main()
{
    size_t n;
    long long element, *vec;

    cin >> n;

    vec = new long long[n];
    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    for (size_t i = 0; i < n; i++) // trecem prin toate pozitiile
        if (vec[i] == element)
        {
            cout << i; // scriem pozitia daca gasim elementul
            break;
        }

    delete[] vec;
    return 0;
}