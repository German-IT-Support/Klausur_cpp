#include <iostream>
#include <string>

using namespace std;

class Router;

class Festplatte
{
private:
    int Speicherkapazitat;
};

class Prozessor
{
private:
    float Taktrate;
};

class Grafikkarte
{
private:
    float AnzahlKerne;
};

// Question 1 - Definition de la classe Computer

class Computer
{
private:
    string ip_address;
    Router *gehortRouter; // association

    Festplatte *gehortFestplatte[8]; // association
    Prozessor cpu[2];                // composition
    Grafikkarte grk[2];              // composition

public:
};

// Question 2 - Definition de la fonction TEMPLATE Maximum

template <class T>

T maximum(T tab[], int n)
{
    T maxi = tab[0];

    for (int i = 0; i < n; i++)
    {
        if (tab[i] > maxi)
        {
            maxi = tab[i];
        }
    }
    return maxi;
}

int main(int argc, char **argv)
{
    long a[4] = {2, 5, 3, 4};
    string s[3] = {"Bochum", "Dortmund", "Essen"};
    cout << maximum(a, 4) << endl;
    cout << maximum(s, 3) << endl;

    return 0;
}