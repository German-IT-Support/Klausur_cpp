#include <iostream>
#include <cmath>

using namespace std;

struct ComplexT
{
    float r, i;
};

// ================ QUESTION 1 ==========================

/* Definition des fonctions de la Question 1*/

/* 1-a Definition avec Surcharge */

double phase(ComplexT z)
{
    // calcul la phase en radian
    return atan(z.i / z.r);
}

double phase(ComplexT z, int einheit)
{
    double phase_radian = atan(z.i / z.r);

    // si l'unite est en degre
    if (einheit == 1)
    {
        // converti la phase en degre et renvoie le resultat
        return phase_radian * (180 / M_PI);
    }
    else
    {
        // renvoie le resultat de la phase en radian
        return phase_radian;
    }
}

/* 1-b Definition avec valeur par defaut  */

/* double phase(ComplexT z, int einheit = 0)
{
    double phase_radian = atan(z.i / z.r);

    // si l'unite est en degre
    if (einheit == 1)
    {
        // converti la phase en degre et renvoie le resultat
        return phase_radian * (180 / M_PI);
    }
    else
    {
        // renvoie le resultat de la phase en radian
        return phase_radian;
    }
} */

// ================ QUESTION 2 ==========================

/* Definition de la fonction umdrehen de la Question 2 */

void umdrehen(ComplexT &n)
{
    n.i = -1 * n.i;
}

int main(int argc, char **argv)
{
    ComplexT z;
    z.r = 5.0;
    z.i = 7.6;

    cout << "\n============== QUESTION 1 ================ \n\n";

    cout << "Z : r = " << z.r << ", i = " << z.i << endl;
    cout << "Phase (radians) = " << phase(z) << endl;

    int einheit = 1;
    cout << "Phase (degree) = " << phase(z, einheit) << endl;

    cout << "\n============== QUESTION 2 ================ \n\n";

    cout << "Avant inversion on a Z : r = " << z.r << ", i = " << z.i << endl;

    umdrehen(z); // Appel de la fonction d'Inversion
    cout << "Apres inversion on a Z : r = " << z.r << ", i = " << z.i << endl;

    return 0;
}