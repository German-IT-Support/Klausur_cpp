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

// Question 1-a Definition de la classe DepotKonto

class Depotkonto : Konto
{
private:
    float aktienwert;
    static float provision;
    static float grundgebuehr;

public:
    Depotkonto(float ak, float prov, float grd);
    void dividendeGutschreiben();
};

/*

Question 1-b . Les objets de la classe depotKonto disposent des attribus :

- kontonummer (hérité de la Classe Konto)
- kontostand  (hérité de la Classe Konto)
- aktienwert
- provision
- grundgebuehr

Question 1-c . Les objets de la classe depotKonto disposent des Méthodes :

- getKontostand
- einzahlen
- auszahlen
- dividendeGutschreiben

*/

int main(int argc, char **argv)
{

    return 0;
}