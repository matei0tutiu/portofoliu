#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("file.txt"); // se modifica dupa caz
    long long x;

    while (file >> x)
    {
        cout << x << ' ';
    }

    file.close();
    return 0;
}