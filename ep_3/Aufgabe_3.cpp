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
    Router *angeschlossen;

    Festplatte *gehortFestplatte[4];
    Prozessor cpu;
    Grafikkarte grk[2];

public:
};

// Question 2 - Definition de la fonction TEMPLATE Min

template <class T>

T Min(T x, T y)
{
    return (x < y) ? x : y;
}

int main(int argc, char **argv)
{
    cout << Min(7, 2) << endl;
    cout << Min("Bochum", "Dortmund") << endl;

    return 0;
}