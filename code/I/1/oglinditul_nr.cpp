#include <iostream>
using namespace std;

int main()
{
    unsigned long long x, oglindit = 0;
    cin >> x;

    while (x) // <=> x > 0
    {
        oglindit = oglindit * 10 + x % 10; // se adauga ultima cifra la oglindit
        x /= 10;                           // se sterge ultima cifra
    }

    cout << oglindit;

    return 0;
}