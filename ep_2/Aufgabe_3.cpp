#include <iostream>
#include <string>

using namespace std;

// Question 1 - Definition de la classe Computer

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

class Computer
{
private:
    string ip_address;
    Router *gehortRouter;
    Festplatte *gehortFestplatte[8];
    Prozessor cpu[2];
    Grafikkarte grk[2];

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