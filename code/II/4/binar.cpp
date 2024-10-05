#include <iostream>
using namespace std;

int main()
{
    size_t n, i;
    long long element, start, end, *vec;
    cin >> n;

    vec = new long long[n];
    for (i = 0; i < n; i++)
        cin >> vec[i];

    cin >> element;
    start = 0;
    end = n;

    while (start != end)
    {
        i = (start + end) / 2; // calculam pozitia care ne intereseaza
        if (vec[i] == element) // daca am gasit elemetnul, oprim executia
            break;
        end = vec[i] > element ? i : end;     // daca elementul este la stanga fata de pozitie, mutam end
        start = vec[i] < element ? i : start; // daca elementul este la dreapte fata de pozitie, mutam start
    }

    if (start != end)
        cout << vec[i];

    delete[] vec;
    return 0;
}