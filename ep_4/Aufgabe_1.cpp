#include <iostream>

using namespace std;

// Question 1.1 - Surcharge de la fonction Polynom

float polynom(float x, float a0, float a1)
{
    return (a1 * x) + a0;
}

float polynom(float x, float a0, float a1, float a2)
{
    return (a2 * (x * x)) + (a1 * x) + a0;
}

// Question 1.2 - Fonction avec Valeur PAR DEFAUT

// float polynom(float x, float a0, float a1, float a2 = 0)
// {
//     return (a2 * (x * x)) + (a1 * x) + a0;
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

    r = r * 2;        // (1)  r = n[0] = 100 * 2 = 200
    p++;              // (2)  i.e p qui pointait sur n[0] pointe sur n[1]
    *p = n[0] + n[1]; // (3)  *p = n[1] = 200 + 100 = 300

    cout << "n[0] =" << n[0] << endl; // n[0] = 200
    cout << "n[1] =" << n[1] << endl; // n[1] = 300
    cout << "r = " << r << endl;      // r = 200
    cout << "*p = " << *p << "\n\n";  // p = 300

    /*

    IMAGE DE LA MEMOIRE

    +-----------------------------------------+
    | Name (Nom) | Inhalt (Contenu) | Adresse |
    +-----------------------------------------+
         ...     |       ...        |   ...
    +-----------------------------------------+
      r, n[0]    |      100         |  2000
                 |      200 (1)     |
    +-----------------------------------------+
        n[1]     |      100         |  2002
                 |      300 (3)     |
    +-----------------------------------------+
        p        |     2000         |  2004
                 |     2002 (2)     |
    +-----------------------------------------+
        ...      |      ...         |  2006
    +-----------------------------------------+


    */

    return 0;
}