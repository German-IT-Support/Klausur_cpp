#include <iostream>

using namespace std;

class Bruch
{
private:
    int Zaehler; // Numerateur
    int Nenner;  // Denominateur

    // Question d)
    static int Anzahl;

public:
    // Question b) Definition du constructeur
    inline Bruch(int a = 0, int b = 1) : Zaehler(a), Nenner(b) { Anzahl++; }

    // Question a) Definitions des Methodes Getters/Setters Inline

    /* ========== GETTERS & SETTERS ================ */

    inline double getZaehler() { return Zaehler; }
    inline double getNenner() { return Nenner; }

    inline void setZaehler(double a) { Zaehler = a; }
    inline void setNenner(double b) { Nenner = b; }

    /* ========== METHODES D'OBJET ================ */

    // Question c) Methodes permettant d'avoir la Fraction en nbre Reel
    float getDouble();

    // Question d
    inline static int getAnzahl() { return Anzahl; }
};

// Question c) SUITE
float Bruch::getDouble()
{
    return (double)Zaehler / Nenner;
}

// Question d) SUITE
int Bruch::Anzahl = 0; // Initialisation de la variable de classe

// Question e) Surcharge d'operateur (Additiob de Fraction)
Bruch operator+(Bruch a, Bruch b)
{
    b.setZaehler(a.getZaehler() * b.getNenner() + a.getNenner() * b.getZaehler());
    b.setNenner(a.getNenner() * b.getNenner());

    return b;
}

int main()
{
    Bruch b1(12, 9);
    Bruch b2(5);
    Bruch b3;
    cout << "b1 = " << b1.getZaehler() << "/" << b1.getNenner() << " = " << b1.getDouble() << endl;
    cout << "b2 = " << b2.getZaehler() << "/" << b2.getNenner() << " = " << b2.getDouble() << endl;
    cout << "b3 = " << b3.getZaehler() << "/" << b3.getNenner() << " = " << b3.getDouble() << endl;

    b3 = b1 + b2;
    cout << "b3 = " << b3.getZaehler() << "/" << b3.getNenner() << " = " << b3.getDouble() << endl;
    cout << "Es gibt insgesamt " << Bruch::getAnzahl() << " Brueche" << endl;

    return 0;
}