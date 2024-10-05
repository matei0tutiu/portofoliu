#include <iostream>

using namespace std;

int main()
{
    unsigned long long int x, sum = 0;
    cin >> x;

    while (x) // <=> x > 0
    {
        sum += x % 10; // se aduna ultima cifra
        x /= 10;       // se sterge ultima cifra
    }

    cout << sum;

    return 0;
}