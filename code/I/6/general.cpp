#include <iostream>
using namespace std;

long long operatie(long long *vec, const size_t &size, const int &currentIndex, const size_t &count)
{
    // se modifica dupa caz

    return 2 * vec[currentIndex - 1] + vec[currentIndex - 2];
}

int main()
{
    // ordinul seriei este numarul de elemente a sirului folosite in calcularea urmatorului. De exemplu, Fibonacci este un sir de ordin 2

    size_t size, ordin;
    cin >> size;
    cin >> ordin;

    long long *vec = new long long[size];

    // se citesc in vectori primele numere
    for (size_t i = 0; i < ordin; i++)
    {
        cin >> vec[i];
    }

    // se calculeaza numerele de dupa in functie de cele de dinainte
    for (size_t i = ordin; i < size; i++)
    {
        vec[i] = operatie(vec, size, i, ordin);
    }

    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';

    return 0;
}