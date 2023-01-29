#include <iostream>
#include <math.h>

using namespace std;

/* Definition de la Classe OrtsVec */

class OrtsVec
{

private:
    double x, y, z;

    // Question d) attribut de classe
    static int nbrOrtsVec;

public:
    // Question b) Definition du constructeur
    inline OrtsVec(double a = 0, double b = 0, double c = 0) : x(a), y(b), z(c) { nbrOrtsVec++; }

    // Question a) Definitions des Methodes Getters/Setters Inline

    /* ========== GETTERS & SETTERS ================ */
    inline double getX() { return x; }
    inline double getY() { return y; }
    inline double getZ() { return z; }

    inline void setX(double a) { x = a; }
    inline void setY(double b) { y = b; }
    inline void setZ(double c) { z = c; }

    /* ========== METHODES D'OBJET ================ */

    // Question c) Methodes permettant d'avoir la longueur d'un Vecteur
    double lange();
    static int getnbrOrtsVec();
};

// Question d) SUITE
int OrtsVec::nbrOrtsVec = 0; // Initialisation de la variable de classe

int OrtsVec::getnbrOrtsVec()
{
    return nbrOrtsVec;
}

// Question c) SUITE
double OrtsVec::lange()
{
    return sqrt((x * x) + (y * y) + (z * z));
}

// Question e) surcharge de l'operateur * pour effectuer le Produit Scalaire
double operator*(OrtsVec A, OrtsVec B)
{
    return A.getX() * B.getX() + A.getY() * B.getY() + A.getZ() * B.getZ();
}

int main(int argc, char **argv)
{
    OrtsVec v1(1, 2, 3), v2;
    v2.setX(4);
    v2.setY(5);
    v2.setZ(6);

    cout << "\nSkalarprodukt von v1 und v2 ist: " << v1 * v2 << endl;
    cout << "Lange v1 = " << v1.lange() << endl;
    cout << "Es gibt insgesamt " << OrtsVec::getnbrOrtsVec() << " Vektoren" << endl;
    cout << endl;

    return 0;
}