#include <iostream>

using namespace std;

// Question e)
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

    // Question d)
    static int AnzObjekte;

public:
    // Question b) Definition du constructeur
    inline Bruch(int a = 0, int b = 1) : Zaehler(a), Nenner(b) { AnzObjekte++; }

    // Question a) Definitions des Methodes Getters/Setters Inline

    /* ========== GETTERS & SETTERS ================ */

    inline double getZaehler() { return Zaehler; }
    inline double getNenner() { return Nenner; }

    inline void setZaehler(double a) { Zaehler = a; }
    inline void setNenner(double b) { Nenner = b; }

    /* ========== METHODES D'OBJET ================ */

    // Question c) Methodes permettant d'avoir la Fraction en nbre Reel
    float getDezimalzahl();

    // Question d
    inline static int getAnzObjekte() { return AnzObjekte; }
};

// Question c) SUITE
float Bruch::getDezimalzahl()
{
    return (double)Zaehler / Nenner;
}

// Question d) SUITE
int Bruch::AnzObjekte = 0; // Initialisation de la variable de classe

// Question e) Surcharge d'operateur (Simplification de Fraction)
Bruch operator~(Bruch &b)
{
    int pgcd = ggt(b.getZaehler(), b.getNenner());
    b.setZaehler(b.getZaehler() / pgcd);
    b.setNenner(b.getNenner() / pgcd);

    return b;
}

int main(int argc, char **argv)
{
    Bruch b1(12, 9);
    Bruch b2(5);
    Bruch b3;

    cout << "b1 = " << b1.getZaehler() << "/" << b1.getNenner() << " = " << b1.getDezimalzahl() << endl;
    cout << "b2 = " << b2.getZaehler() << "/" << b2.getNenner() << " = " << b2.getDezimalzahl() << endl;
    cout << "b3 = " << b3.getZaehler() << "/" << b3.getNenner() << " = " << b3.getDezimalzahl() << endl;

    b3 = ~b1;
    cout << "b1 = " << b1.getZaehler() << "/" << b1.getNenner() << " = " << b1.getDezimalzahl() << endl;
    cout << "b3 = " << b3.getZaehler() << "/" << b3.getNenner() << " = " << b3.getDezimalzahl() << endl;
    cout << "Es gibt insgesamt " << Bruch::getAnzObjekte() << " Brueche" << endl;

    return 0;
}