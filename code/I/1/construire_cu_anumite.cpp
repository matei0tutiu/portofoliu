#include <iostream>
using namespace std;

int main()
{

    unsigned long long x, oglindit = 0, result = 0;

    cin >> x; // se citeste x

    // se oglindeste
    while (x)
    {
        oglindit = oglindit * 10 + x % 10;
        x /= 10;
    }

    // se calculeaza rezultatul
    while (oglindit)
    {
        // se citeste cifra curenta
        int cifra = oglindit % 10;

        if (true)                         //! se modifica conditia dupa caz
            result = result * 10 + cifra; // daca se indeplineste conditia, cifra se adauga rezultatului

        oglindit /= 10; // se sterge ultima cifra din numar
    }

    cout << result;

    return 0;
}