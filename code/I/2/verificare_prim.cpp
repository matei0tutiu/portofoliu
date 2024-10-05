#include <iostream>
using namespace std;

int main()
{
    unsigned long long x, i, nrDiv = 0;
    cin >> x;

    for (i = 1; i * i <= x; i++) // trecem prin toate numerele <= x
    {
        if (x % i == 0) // daca i divide x, incrementam nrDiv
            nrDiv += 2;
    }

    bool rezultat = nrDiv == 2; // un nr este prim daca are exact doi divizori

    cout << (rezultat ? "PRIM" : "COMPUS");

    return 0;
}