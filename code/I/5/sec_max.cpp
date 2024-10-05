#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream file("input.txt"); // se modifica dupa caz
    long long x, max = INT64_MIN;

    while (file >> x)
    {
        max = x > max ? x : max; // daca numarul curent e mai mare decat max, el devine noul max
    }

    cout << max;

    file.close();
    return 0;
}