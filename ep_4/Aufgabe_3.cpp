#include <iostream>
#include <string>
#include <vector>

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
    Router *gehortRouter;

    Festplatte *gehortFestplatte[8];
    Prozessor cpu[2];
    Grafikkarte grk[2];

public:
    string getIP() { return ip_address; }
    void setIP(string ip) { ip_address = ip; }
};

// Question 2 - Definition de la classe Router

class Router
{
private:
    vector<Computer *> angeschlossen; // (a) - Utilisation conteneur STL

public:
    // (b) - Methode qui définit que le routeur est connecté à un ordinateur
    bool hatComputer()
    {
        if (angeschlossen.empty())
            return false; // Lié à Aucun PC
        else
            return true; // Lié à au moins 1 PC
    }

    // (c) - Methode qui renvoie tous les ordinateurs connectés au routeur
    void computerListe()
    {
        if (hatComputer())
        {
            for (int i(0); i < angeschlossen.size(); i++)
                if (angeschlossen[i] != NULL)
                    cout << "- " << angeschlossen[i]->getIP() << endl;
        }
    }
};

int main(int argc, char **argv)
{

    return 0;
}