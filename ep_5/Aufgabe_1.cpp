#include <iostream>

using namespace std;

// Question 1.1 - Surcharge de la fonction Polynom

float polynom(float x, float b0, float b1)
{
    return (b1 * x) + b0;
}

float polynom(float x, float b0, float b1, float b2)
{
    return (b2 * (x * x)) + (b1 * x) + b0;
}

// Question 1.2 - Fonction avec Valeur PAR DEFAUT

// float polynom(float x, float b0, float b1, float b2 = 0)
// {
//     return (b2 * (x * x)) + (b1 * x) + b0;
// }

int main(int argc, char **argv)
{

    cout << "\n============== QUESTION 1 ================ \n\n";

    cout << "Lineare Polynom :  2x + 3 ; x = 2 ; S = " << polynom(2, 3, 2) << endl;
    cout << "Quadrat Polynom : x^2 + 2x + 3 ; x = 2 ; S = " << polynom(2, 3, 2, 1) << endl;

    cout << "\n============== QUESTION 2 ================ \n\n";

    short n[2] = {100, 100}; // Tableau de 2 nombres
    short &r = n[0];         // Variable de ref r (alias sur n[0]) i.e on la meme adresse
    short *p = &r;           // pointeur p pointe sur r et donc n[0]

    r = r * 3;        // (1)  r = n[0] = 100 * 3 = 300
    p++;              // (2)  i.e p qui pointait sur n[0] pointe sur n[1]
    *p = n[1] - n[0]; // (3)  *p = n[1] = 100 - 300 = -200

    cout << "n[0] = " << n[0] << endl; // n[0] = 300
    cout << "n[1] = " << n[1] << endl; // n[1] = -200
    cout << "r    = " << r << endl;    // r = 300
    cout << "*p   = " << *p << "\n\n"; // p = -200

    /*

    IMAGE DE LA MEMOIRE

    +-----------------------------------------+
    | Name (Nom) | Inhalt (Contenu) | Adresse |
    +-----------------------------------------+
         ...     |       ...        |   ...
    +-----------------------------------------+
      r, n[0]    |      100         |  2000
                 |      300 (1)     |
    +-----------------------------------------+
        n[1]     |      100         |  2002
                 |     -200 (3)     |
    +-----------------------------------------+
        p        |     2000         |  2004
                 |     2002 (2)     |
    +-----------------------------------------+
        ...      |      ...         |  2006
    +-----------------------------------------+


    */

    return 0;
}