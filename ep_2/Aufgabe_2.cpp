#include <iostream>

using namespace std;

// Question d)
int ggt(int a, int b)
{
    if (b == 0)
        return a;
    else
        return ggt(b, a % b);
}

class Bruch
{
private:
    int Zaehler; // Numerateur
    int Nenner;  // Denominateur

public:
    // Question b) Definition du constructeur
    inline Bruch(int a = 0, int b = 1) : Zaehler(a), Nenner(b) {}

    // Question a) Definitions des Methodes Getters/Setters Inline

    /* ========== GETTERS & SETTERS ================ */

    inline double getZaehler() { return Zaehler; }
    inline double getNenner() { return Nenner; }

    inline void setZaehler(double a) { Zaehler = a; }
    inline void setNenner(double b) { Nenner = b; }

    /* ========== METHODES D'OBJET ================ */

    // Question c) Methodes permettant d'avoir la Fraction en nbre Reel
    double getDouble();
};

// Question c) SUITE
double Bruch::getDouble()
{
    return (double)Zaehler / Nenner;
}

// Question d) Surcharge d'operateur (Simplification de Fraction)
Bruch operator~(Bruch &bch)
{
    int pgcd = ggt(bch.getZaehler(), bch.getNenner());
    bch.setZaehler(bch.getZaehler() / pgcd);
    bch.setNenner(bch.getNenner() / pgcd);

    return bch;
}

int main(int argc, char **argv)
{
    Bruch b1(12, 9);
    Bruch b2(5);
    Bruch b3;

    cout << "b1 = " << b1.getZaehler() << "/" << b1.getNenner() << " = " << b1.getDouble() << endl;
    cout << "b2 = " << b2.getZaehler() << "/" << b2.getNenner() << " = " << b2.getDouble() << endl;
    cout << "b3 = " << b3.getZaehler() << "/" << b3.getNenner() << " = " << b3.getDouble() << endl;

    b3 = ~b1;
    cout << "b1 = " << b1.getZaehler() << "/" << b1.getNenner() << " = " << b1.getDouble() << endl;
    cout << "b3 = " << b3.getZaehler() << "/" << b3.getNenner() << " = " << b3.getDouble() << endl;

    return 0;
}