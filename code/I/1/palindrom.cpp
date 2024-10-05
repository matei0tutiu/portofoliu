#include <iostream>
using namespace std;

int main()
{
    unsigned long long x, copie, oglindit = 0;

    cin >> x;

    copie = x; // tinem minte numarul

    // se oglindeste numarul
    while (x)
    {
        oglindit = oglindit * 10 + x % 10;
        x /= 10;
    }

    bool rezultat = copie == oglindit; // nr e palindrom daca este egal cu oglinditul sau

    cout << (rezultat ? "DA" : "NU");

    return 0;
}