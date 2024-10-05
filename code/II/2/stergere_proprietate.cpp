#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

void StergePozitie(long long *vec, size_t &size, const size_t &pozitie)
{
    for (size_t i = pozitie; i < size - 1; i++)
        vec[i] = vec[i + 1];
    size--;
}

bool conditie(long long numar)
{
    return false; //! se modifica conditia dupa caz
}

int main()
{
    size_t n;
    long long nMax, pozitie, *vec;
    cin >> n;
    vec = new long long[n];
    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    cin >> pozitie;

    for (size_t i = 0; i < n; i++)
    {
        if (conditie(vec[i]))
        {
            StergePozitie(vec, n, pozitie); // se sterge doar daca numarul indeplineste conditia
        }
    }

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}
