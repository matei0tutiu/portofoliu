#include <iostream>
using namespace std;

bool conditie(unsigned long long cifra)
{
    return true; //! se modifica conditia
}

int main()
{

    unsigned long long n, prod = 1;
    cin >> n;

    while (n)
    {
        if (conditie(n % 10))
            prod *= n % 10; // daca cifra indeplineste conditia, o inmultim

        n /= 10; // sterge ultima cifra
    }

    cout << prod;

    return 0;
}