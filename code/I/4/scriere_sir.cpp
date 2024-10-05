#include <iostream>
#include <fstream>
using namespace std;

static class Generator //? OBS: vezi I/6/general.cpp
{
private:
    static long long operatie(long long *vec, const int &size, const int &currentIndex, const int &count)
    {
        //! se modifica dupa caz
        return 2 * vec[currentIndex - 1] + vec[currentIndex - 2];
    }

public:
    static long long *generate(int size, int ordin, long long *primele)
    {
        long long *result = new long long[size];
        for (int i = 0; i < ordin; i++)
        {
            result[i] = primele[i];
        }

        for (int i = ordin; i < size; i++)
        {
            result[i] = operatie(result, size, i, ordin);
        }

        return result;
    }
};

int main()
{
    int size, ordin;
    ifstream ifile("input.txt");
    ofstream ofile("output.txt"); //! se modifica dupa caz

    ifile >> size;
    ifile >> ordin;
    long long *primele = new long long[ordin];

    for (int i = 0; i < ordin; i++)
        ifile >> primele[i];

    long long *sir = Generator::generate(size, ordin, primele); // se genereaza un sir

    for (int i = 0; i < size; i++)
        ofile << sir[i]; // se scrie sirul

    ifile.close();
    ofile.close();
    delete[] primele;
    delete[] sir;
    return 0;
}