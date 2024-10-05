#include <iostream>
using namespace std;

int main()
{
    size_t n;
    cin >> n;

    long long *vec = new long long[n];
    vec[0] = 1;
    vec[1] = 1;

    for (size_t i = 2; i < n; i++) // trecem prin toate pozitiile vectorului
    {
        vec[i] = vec[i - 1] + vec[i - 2]; // calculam numarul in functie de predecesori
    }

    for (size_t i = 0; i < n; i++)
        cout << vec[i] << ' ';

    delete[] vec;
    return 0;
}