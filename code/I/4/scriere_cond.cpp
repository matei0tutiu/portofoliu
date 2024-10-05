#include <iostream>
#include <fstream>
using namespace std;

bool conditie(long long numar)
{
    return true; //! se modifica conditia
}

int main()
{

    ifstream ifile("input.txt");  // se modifica dupa caz
    ofstream ofile("output.txt"); // se modifica dupa caz

    long long x;

    while (ifile >> x)
    {
        if (conditie(x))
            ofile << x; // scrie numarul citit doar daca indeplineste conditia
    }

    ifile.close();
    ofile.close();
    return 0;
}