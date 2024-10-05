#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream file("input.txt"); // se modifica dupa caz
    long long x, min = INT64_MIN;

    while (file >> x)
    {
        min = x < min ? x : min; // daca numarul curent e mai mic decat min, el devine noul min
    }

    cout << min;

    file.close();
    return 0;
}