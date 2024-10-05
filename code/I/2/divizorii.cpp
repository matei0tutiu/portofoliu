#include <iostream>
using namespace std;

int main()
{
    unsigned long long x;
    cin >> x;

    for (unsigned long long i = 1; i <= x; i++) // trecem prin toate numerele <= x
    {
        if (x % i == 0) // scriem i daca divide x
            cout << i << ' ';
    }

    return 0;
}