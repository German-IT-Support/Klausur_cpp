#include <iostream>

using namespace std;

class Konto
{
protected:
    unsigned int kontonummer;
    float kontostand;

public:
    Konto(unsigned int knr, float ks = 0.0);
    float getKontostand();
    void einzahlen(float b);
    void auszahlen(float b);
};

// Question 1-a Definition de la classe Sparbuch

class Sparbuch : Konto
{
private:
    float laufzeit;
    float zinssatz;
    static float grundgebuehr;

public:
    Sparbuch(float lz, float zs, unsigned int knr) : Konto::Konto(knr), laufzeit(lz), zinssatz(zs){};
    void verzinsen();
};

/*

Question 1-b . Les objets de la classe Sparbuch disposent des attribus :

- kontonummer (hérité de la Classe Konto)
- kontostand  (hérité de la Classe Konto)
- laufzeit
- zinssatz
- grundgebuehr

Question 1-c . Les objets de la classe Sparbuch disposent des Méthodes :

- getKontostand
- einzahlen
- auszahlen
- verzinsen

*/