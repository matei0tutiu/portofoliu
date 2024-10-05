#include <iostream>
using namespace std;

bool conditie(unsigned long long cifra)
{
    return true; //! se modifica conditia
}

int main()
{

    unsigned long long n, sum = 0;
    cin >> n;

    while (n) // <=> n > 0
    {

        if (conditie(n % 10))
            sum += n % 10; // daca cifra indeplineste conditia, o adaugam

        n /= 10; // sterge ultima cifra
    }

    cout << sum;

    return 0;
}