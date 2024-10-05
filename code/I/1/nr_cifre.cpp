#include <iostream>
using namespace std;

int main()
{

    unsigned long long x, nr = 0;
    cin >> x;

    while (x) // <=> x > 0
    {
        nr++;    // incrementam nr
        x /= 10; // stergem ultima cifra
    }

    cout << nr;

    return 0;
}