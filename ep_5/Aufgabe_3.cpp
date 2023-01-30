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
    Router *gehortRouter; // association

    Festplatte *gehortFestplatte[4]; // association
    Prozessor cpu[4];                // composition
    Grafikkarte grk[1];              // composition

public:
    string getIP() { return ip_address; }
    void setIP(string ip) { ip_address = ip; }
};

// Question 2 - Definition de la classe Router

class Router
{
private:
    vector<Computer *> vermittelt; // (a) - Utilisation conteneur STL

public:
    // (b) - Methode qui définit que le routeur est connecté à un ordinateur
    bool hatComputer()
    {
        if (vermittelt.empty())
            return false; // Lié à Aucun PC
        else
            return true; // Lié à au moins 1 PC
    }

    // (c) - Methode qui renvoie tous les ordinateurs connectés au routeur
    void computerListe()
    {
        if (hatComputer())
        {
            for (int i(0); i < vermittelt.size(); i++)
                if (vermittelt[i] != NULL)
                    cout << "- " << vermittelt[i]->getIP() << endl;
        }
    }
};