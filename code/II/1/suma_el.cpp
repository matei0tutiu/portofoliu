#include <iostream>
using namespace std;

int main()
{

    size_t n;
    long long sum = 0, *vec;
    cin >> n;

    vec = new long long[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (size_t i = 0; i < n; i++) // se trece prin toate elementele vectorului
    {
        sum += vec[i]; // se aduna element curent
    }

    cout << sum;

    delete[] vec;
    return 0;
}