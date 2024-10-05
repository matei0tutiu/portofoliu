# I. Algoritmi elementari

| Nr crt | Categorie                     | Probleme                                                                                                                                                                 |
| ------ | ----------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| 1      | Prelucrarea cifrelor unui nr  | a) Suma Cifrelor<br />b) Nr de cifre a unui nr<br />c) Oglinditul unui nr<br />d) Testare palindrom<br />e) Contruirea unui nr cu anumite cifre<br />f) Cifra de control |
| 2      | Probleme de divizibilitate    | a) Divizorii unui nr<br />b) Cmmdc<br />c) Cmmmc<br />d) Verificare nr prim<br />e) Descompunere in factori                                                              |
| 3      | Calculul unor sume / produse  | a) Suma cifrelor conditie<br />b) Produsul cifrelor conditie                                                                                                             |
| 4      | Prelucrare secvente           | a) Citire<br />b) Scrierea conditie<br />c) Scriere sir recurent                                                                                                         |
| 5      | Maxime si minime              | a) Cifra max<br />b) Cifra min<br />c) Secventa max<br />d) Secventa min                                                                                                 |
| 6      | Generarea sirurilor recurente | a) Fibonacci<br />b) General                                                                                                                                             |

## 1. Prelucrarea cifrelor unui nr

### a) Suma Cifrelor

```cpp
#include <iostream>

using namespace std;

int main()
{
    unsigned long long int x, sum = 0;
    cin >> x;

    while (x) // <=> x > 0
    {
        sum += x % 10; // se aduna ultima cifra
        x /= 10;       // se sterge ultima cifra
    }

    cout << sum;

    return 0;
}
```

### b) Nr de cifre a unui nr

```cpp
#include <iostream>
using namespace std;

int main()
{

    unsigned long long x, nr = 0;
    cin >> x;

    while (x) // <=> x > 0
    {
        nr++;    // incrementam nr
        x /= 10; // stergem ultima cifra
    }

    cout << nr;

    return 0;
}
```

### c) Oglinditul unui nr

```cpp
#include <iostream>
using namespace std;

int main()
{
    unsigned long long x, oglindit = 0;
    cin >> x;

    while (x) // <=> x > 0
    {
        oglindit = oglindit * 10 + x % 10; // se adauga ultima cifra la oglindit
        x /= 10;                           // se sterge ultima cifra
    }

    cout << oglindit;

    return 0;
}
```

### d) Testare palindrom

```cpp
#include <iostream>
using namespace std;

int main()
{
    unsigned long long x, copie, oglindit = 0;

    cin >> x;

    copie = x; // tinem minte numarul

    // se oglindeste numarul
    while (x)
    {
        oglindit = oglindit * 10 + x % 10;
        x /= 10;
    }

    bool rezultat = copie == oglindit; // nr e palindrom daca este egal cu oglinditul sau

    cout << (rezultat ? "DA" : "NU");

    return 0;
}
```

### e) Construirea unui nr cu anumite cifre

```cpp
#include <iostream>
using namespace std;

int main()
{

    unsigned long long x, oglindit = 0, result = 0;

    cin >> x; // se citeste x

    // se oglindeste
    while (x)
    {
        oglindit = oglindit * 10 + x % 10;
        x /= 10;
    }

    // se calculeaza rezultatul
    while (oglindit)
    {
        // se citeste cifra curenta
        int cifra = oglindit % 10;

        if (true)                         //! se modifica conditia dupa caz
            result = result * 10 + cifra; // daca se indeplineste conditia, cifra se adauga rezultatului

        oglindit /= 10; // se sterge ultima cifra din numar
    }

    cout << result;

    return 0;
}
```

### f) Cifra de control

```cpp
#include <iostream>
using namespace std;

int main()
{

    unsigned long long x, copie;
    cin >> x;

    while (x / 10) // cat timp suma cifrelor este mai mare de 10
    {

        copie = x; // tinem minte x in alta variabila
        x = 0;     // pregatim variablia x pentru a se aduna cifrele

        // se aduna cifrele
        while (copie)
        {
            x += copie % 10;
            copie /= 10;
        }
    }

    cout << x;
    return 0;
}
```

## 2. Probleme de divizibilitate

### a) Divizorii unui nr

```cpp
#include <iostream>
using namespace std;

int main()
{
    unsigned long long x;
    cin >> x;

    for (unsigned long long i = 1; i <= x; i++) // trecem prin toate numerele <= x
    {
        if (x % i == 0) // scriem i daca divide x
            cout << i << ' ';
    }

    return 0;
}
```

### b) Cmmdc

```cpp
#include <iostream>
using namespace std;

int main()
{

    int a, b, r;

    cin >> a;
    cin >> b;

    // algoritmul lui Euclid
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }

    cout << a;

    return 0;
}
```

### c) Cmmmc

```cpp
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
```

### d) Verificare nr prim

```cpp
#include <iostream>
using namespace std;

int main()
{
    unsigned long long x, i, nrDiv = 0;
    cin >> x;

    for (i = 1; i * i <= x; i++) // trecem prin toate numerele <= x
    {
        if (x % i == 0) // daca i divide x, incrementam nrDiv
            nrDiv += 2;
    }

    bool rezultat = nrDiv == 2; // un nr este prim daca are exact doi divizori

    cout << (rezultat ? "PRIM" : "COMPUS");

    return 0;
}
```

### e) Descompunere in factori primi

```cpp
#include <iostream>
using namespace std;

int main()
{

    unsigned long long x, putere;
    cin >> x;

    for (unsigned long long i = 2; x > 1; i++) // luam pe rand toate numerele pana cand x = 1
    {
        putere = 0;        // puterea factorului la care suntem acum
        while (x % i == 0) // cat timp x este divizibil cu i
        {
            putere++; // incrementam puterea
            x /= i;   // impartim la i
        }

        if (putere != 0) // daca puterea este diferita de 0, scriem rezultatul
            cout << i << ' ' << putere << '\n';
    }

    return 0;
}
```

## 3. Calculul unor sume / produse

### a) Suma cifrelor conditie

```cpp
#include <iostream>
using namespace std;

bool conditie(unsigned long long cifra)
{
    return true; //! se modifica conditia
}

int main()
{

    unsigned long long n, sum = 0;
    cin >> n;

    while (n) // <=> n > 0
    {

        if (conditie(n % 10))
            sum += n % 10; // daca cifra indeplineste conditia, o adaugam

        n /= 10; // sterge ultima cifra
    }

    cout << sum;

    return 0;
}
```

### b) Produsul cifrelor conditie

```cpp
#include <iostream>
using namespace std;

bool conditie(unsigned long long cifra)
{
    return true; //! se modifica conditia
}

int main()
{

    unsigned long long n, prod = 1;
    cin >> n;

    while (n)
    {
        if (conditie(n % 10))
            prod *= n % 10; // daca cifra indeplineste conditia, o inmultim

        n /= 10; // sterge ultima cifra
    }

    cout << prod;

    return 0;
}
```

## 4. Prelucrare secvente

### a) Citire

```cpp
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
```

### b) Scrierea conditie

```cpp
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
```

### c) Scriere sir recurent

```cpp
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
```

## 5. Maxime si minime

### a) Cifra max

```cpp
#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, max = 0;
    cin >> n;

    while (n) // trecem prin toate cifrele
    {
        max = n % 10 > max ? n % 10 : max; // daca cifra e mai mare decat max, ea devine noul max

        n /= 10;
    }

    cout << max;

    return 0;
}
```

### b) Cifra min

```cpp
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
```

### c) Secventa max

```cpp
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
```

### d) Secventa min

```cpp
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
```

## 6. Generarea sirurilor recurente

### a) Fibonacci

```cpp
#include <iostream>
using namespace std;

int main()
{
    size_t n;
    cin >> n;

    long long *vec = new long long[n];
    vec[0] = 1;
    vec[1] = 1;

    for (size_t i = 2; i < n; i++) // trecem prin toate pozitiile vectorului
    {
        vec[i] = vec[i - 1] + vec[i - 2]; // calculam numarul in functie de predecesori
    }

    for (size_t i = 0; i < n; i++)
        cout << vec[i] << ' ';

    delete[] vec;
    return 0;
}
```

### b) General

```cpp
#include <iostream>
using namespace std;

long long operatie(long long *vec, const size_t &size, const int &currentIndex, const size_t &count)
{
    // se modifica dupa caz

    return 2 * vec[currentIndex - 1] + vec[currentIndex - 2];
}

int main()
{
    // ordinul seriei este numarul de elemente a sirului folosite in calcularea urmatorului. De exemplu, Fibonacci este un sir de ordin 2

    size_t size, ordin;
    cin >> size;
    cin >> ordin;

    long long *vec = new long long[size];

    // se citesc in vectori primele numere
    for (size_t i = 0; i < ordin; i++)
    {
        cin >> vec[i];
    }

    // se calculeaza numerele de dupa in functie de cele de dinainte
    for (size_t i = ordin; i < size; i++)
    {
        vec[i] = operatie(vec, size, i, ordin);
    }

    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';

    return 0;
}
```

# II. Tablouri unidimensionale

| Nr crt | Categorie           | Probleme                                                                                                            |
| ------ | ------------------- | ------------------------------------------------------------------------------------------------------------------- |
| 1      | Parcurgere vectori  | a) Suma elementelor<br />b) Maxim / Minim<br />c) Oglindire in alt sir<br />d) Oglindire                            |
| 2      | Stergeri / Inserari | a) Stergerea din pozitie<br />b) Stergerea conditie<br />c) Inserare<br />d) Inserare inainte<br />e) Inserare dupa |
| 3      | Sortare             | a) Bubble Sort<br />b) Stupid Sort                                                                                  |
| 4      | Cautare             | a) Secventiala<br />b) Binara                                                                                       |

## 1. Parcurgere vectori

### a) Suma elementelor

```cpp
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
```

### b) Maxim / Minim

```cpp
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
```

### c) Oglindire in alt sir

```cpp
#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

int main()
{

    size_t n;
    cin >> n;

    long long *a = new long long[n];
    long long *b = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> a[i];

    for (size_t i = 0; i < n; i++)
        b[n - i - 1] = a[i]; // se scrie a in b in ordine inversa

    PrintVec(b, n);

    delete[] a;
    delete[] b;
    return 0;
}
```

### d) Oglindire

```cpp
#include <iostream>
using namespace std;

void interchange(long long &a, long long &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

int main()
{

    size_t n;
    cin >> n;

    long long *vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    PrintVec(vec, n);

    for (size_t i = 0; i < n - i - 1; i++)   // se trece prin vector in perechi de indici de forma (i, n - i - 1)
        interchange(vec[i], vec[n - i - 1]); // se interschimba numerele intre ele

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}
```

## 2. Stergeri / Inserari

### a) Stergerea din pozitie

```cpp
#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

int main()
{
    size_t n;
    long long nMax, pozitie, *vec;
    cin >> nMax;
    cin >> n;
    vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    cin >> pozitie;
    for (size_t i = pozitie; i < n - 1; i++)
        vec[i] = vec[i + 1]; // se copiaza o portiune a vectorului la stanga cu o pozitie
    n--;                     // scadem marimea vectorului

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}
```

### b) Stergerea conditie

```cpp
#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

void StergePozitie(long long *vec, size_t &size, const size_t &pozitie)
{
    for (size_t i = pozitie; i < size - 1; i++)
        vec[i] = vec[i + 1];
    size--;
}

bool conditie(long long numar)
{
    return false; //! se modifica conditia dupa caz
}

int main()
{
    size_t n;
    long long nMax, pozitie, *vec;
    cin >> n;
    vec = new long long[n];
    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    cin >> pozitie;

    for (size_t i = 0; i < n; i++)
    {
        if (conditie(vec[i]))
        {
            StergePozitie(vec, n, pozitie); // se sterge doar daca numarul indeplineste conditia
        }
    }

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}

```

### c) Inserare

```cpp
#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

int main()
{
    size_t n;
    long long nMax, pozitie, x, *vec;
    cin >> nMax;
    cin >> n;
    vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    cin >> pozitie;
    cin >> x;

    for (size_t i = n; i > pozitie; i--)
        vec[i] = vec[i - 1]; // mutam o portiune a vectorului la dreapta cu o pozitie
    vec[pozitie] = x;        // inseram in pozitia libera elementul
    n++;                     // crestem marimea vectorului

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}
```

### d) Inserare inainte

```cpp
#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

void InsertElement(long long *vec, size_t &size, const size_t &pozitie, const unsigned long long &element)
{
    for (int i = size; i > pozitie; i--)
        vec[i] = vec[i - 1];
    vec[pozitie] = element;
    size++;
}

int main()
{
    size_t n, nMax;
    long long tinta, element, *vec;
    cin >> nMax;
    cin >> n;
    vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    cin >> tinta;
    cin >> element;

    for (unsigned long long i = 1; i < n; i++)
        if (vec[i] == tinta)
            InsertElement(vec, n, i - 1, element); // daca numarul curent e egal cu tinta, se insereaza inaintea lui elementul

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}
```

### e) Inserare dupa

```cpp
#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

void InsertElement(long long *vec, size_t &size, const size_t &pozitie, const unsigned long long &element)
{
    for (int i = size; i > pozitie; i--)
        vec[i] = vec[i - 1];
    vec[pozitie] = element;
    size++;
}

int main()
{
    size_t n, nMax;
    long long tinta, element, *vec;
    cin >> nMax;
    cin >> n;
    vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    cin >> tinta;
    cin >> element;

    for (unsigned long long i = 0; i < n - 1; i++)
        if (vec[i] == tinta)
            InsertElement(vec, n, i + 1, element); // daca numarul curent e egal cu tinta, se insereaza dupa el elementul

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}
```

## 3. Sortare

### a) Bubble Sort

```cpp
#include <iostream>
using namespace std;

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

void interchange(long long &a, long long &b)
{

    a += b;
    b = a - b;
    a -= b;
}

int main()
{
    size_t n, nrSchimb;

    cin >> n;
    long long *vec = new long long[n];

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    do
    {
        nrSchimb = 0;

        for (int i = 0; i < n - 1; i++)
            if (vec[i] > vec[i + 1])
            {
                interchange(vec[i], vec[i + 1]); // inversam elementele daca nu sunt in ordine
                nrSchimb++;                      // incrementam numarul de schimburi
            }

    } while (nrSchimb > 0);

    PrintVec(vec, n);

    delete[] vec;
    return 0;
}
```

### b) Stupid Sort

```cpp
#include <iostream>
using namespace std;

void interschimb(long long &a, long long &b)
{

    a += b;
    b = b - a;
    a -= b;
}

void PrintVec(long long *vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << vec[i] << ' ';
    cout << '\n';
}

int main()
{
    size_t n;
    cin >> n;

    long long *vec = new long long[n];

    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (vec[i] > vec[j])
                interschimb(vec[i], vec[j]); // daca elementele nu sunt in ordine, le schimbam
        }
    }

    PrintVec(vec, n);

    return 0;
}
```

## 4. Cautare

### a) Secventiala

```cpp
#include <iostream>
using namespace std;

int main()
{
    size_t n;
    long long element, *vec;

    cin >> n;

    vec = new long long[n];
    for (size_t i = 0; i < n; i++)
        cin >> vec[i];

    for (size_t i = 0; i < n; i++) // trecem prin toate pozitiile
        if (vec[i] == element)
        {
            cout << i; // scriem pozitia daca gasim elementul
            break;
        }

    delete[] vec;
    return 0;
}
```

### b) Binara

```cpp
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
```
