#include <iostream>
#include <math.h>

using namespace std;

class Kreis
{
private:
    float Radius;

    // Question d) attribut de classe
    static int Zaehler;

public:
    // Question b) Definition du constructeur Inline
    inline Kreis(float r = 1.0) : Radius(r) { Zaehler++; }

    // Question a) Definitions des Methodes Getters/Setters Inline

    /* ========== GETTERS & SETTERS ================ */
    inline float getRadius() { return Radius; }
    inline void setRadius(float r) { Radius = r; }

    // Question d
    inline static int getZaehler() { return Zaehler; }

    /* ========== METHODES D'OBJET ================ */

    // Question c) Methodes permettant d'avoir la surface d'un Cercle
    float getUmfang();
};

// Question d) SUITE
int Kreis::Zaehler = 0; // Initialisation de la variable de classe

float Kreis::getUmfang()
{
    return 2 * M_PI * Radius;
}

// Question e)
Kreis operator/(Kreis kr, int x)
{
    kr.setRadius(kr.getRadius() / x);
    return kr;
}

int main(int argc, char **argv)
{
    Kreis k1;
    Kreis k2(3.0);
    Kreis k3;

    cout << "Kreis mit Radius " << k1.getRadius() << " hat Umfang " << k1.getUmfang() << endl;
    cout << "Kreis mit Radius " << k2.getRadius() << " hat Umfang " << k2.getUmfang() << endl;
    // k3 = k2 / 3;
    cout << "k2/3 hat Radius " << k3.getRadius() << " und Umfang " << k3.getUmfang() << endl;
    cout << "Es gibt insgesamt " << Kreis::getZaehler() << " Kreise" << endl;

    return 0;
}