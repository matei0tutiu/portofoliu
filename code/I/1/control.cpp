#include <iostream>
using namespace std;

int main()
{

    unsigned long long x, copie;
    cin >> x;

    while (x / 10) // cat timp suma cifrelor este mai mare de 10
    {

        copie = x; // tinem minte x in alta variabila
        x = 0;     // pregatim variablia x pentru a se aduna cifrele

        // se aduna cifrele
        while (copie)
        {
            x += copie % 10;
            copie /= 10;
        }
    }

    cout << x;
    return 0;
}