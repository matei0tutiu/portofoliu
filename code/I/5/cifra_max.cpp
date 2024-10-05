#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, max = 0;
    cin >> n;

    while (n) // trecem prin toate cifrele
    {
        max = n % 10 > max ? n % 10 : max; // daca cifra e mai mare decat max, ea devine noul max

        n /= 10;
    }

    cout << max;

    return 0;
}