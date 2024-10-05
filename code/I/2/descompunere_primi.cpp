#include <iostream>
using namespace std;

int main()
{

    unsigned long long x, putere;
    cin >> x;

    for (unsigned long long i = 2; x > 1; i++) // luam pe rand toate numerele pana cand x = 1
    {
        putere = 0;        // puterea factorului la care suntem acum
        while (x % i == 0) // cat timp x este divizibil cu i
        {
            putere++; // incrementam puterea
            x /= i;   // impartim la i
        }

        if (putere != 0) // daca puterea este diferita de 0, scriem rezultatul
            cout << i << ' ' << putere << '\n';
    }

    return 0;
}