#include <iostream>
using namespace std;

int main()
{

    int a, b, r;

    cin >> a;
    cin >> b;

    // algoritmul lui Euclid
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }

    cout << a;

    return 0;
}