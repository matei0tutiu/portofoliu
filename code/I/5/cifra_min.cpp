#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, min = 10;
    cin >> n;

    while (n) // trecem prin toate cifrele
    {
        min = n % 10 < min ? n % 10 : min; // daca cifra e mai mica decat min, ea devine noul min
        n /= 10;
    }

    cout << min;

    return 0;
}