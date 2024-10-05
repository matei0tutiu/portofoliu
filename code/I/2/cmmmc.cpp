#include <iostream>
using namespace std;

int main()
{

    int a, b, cmmdc, cmmmc, r;
    cin >> a;
    cin >> b;
    cmmdc = a;
    cmmmc = b;

    // se calculeaza cmmdc
    while (cmmmc)
    {
        r = cmmdc % cmmmc;
        cmmdc = cmmmc;
        cmmmc = r;
    }

    cmmmc = (a * b) / cmmdc; // se foloseste proprietate cmmdc * cmmmc = a * b

    cout << cmmmc;

    return 0;
}