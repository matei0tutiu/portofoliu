#include <iostream>
using namespace std;

int main()
{
    size_t n;
    long long min = UINT64_MAX, max = 0, *vec;
    cin >> n;

    vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    for (size_t i = 0; i < n; i++)
    {
        max = max > vec[i] ? max : vec[i]; // daca numarul curent e mai mare decat max, el devine noul max
        min = min < vec[i] ? min : vec[i]; // daca numarul curent e mai mic decat min, el devine noul min
    }

    cout << max << ' ' << min;

    delete[] vec;
    return 0;
}