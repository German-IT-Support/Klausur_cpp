#include <iostream>

using namespace std;

// Question 1.1 - Surcharge de la fonction WERT

float wert(float Grundstucks)
{
    return Grundstucks * 235;
}

float wert(float Grundstucks, float Immobilie)
{
    return (Grundstucks * 235) + (Immobilie * 2530);
}

// Question 1.2 - Fonction avec Valeur PAR DEFAUT

/* float wert(float Grundstucks, float Immobilie = 0)
{
    return (Grundstucks * 235) + (Immobilie * 2530);
} */

int main(int argc, char **argv)
{
    cout << "================ Question 1 ================= \n\n";

    cout << "Valeur du Terrain sans surface d'habitation = " << wert(100) << endl;
    cout << "Valeur du Terrain avec surface d'habitation = " << wert(100, 150) << endl;

    cout << "\n================ Question 2 ================= \n\n";

    long n[3] = {2000, 3000, 4000};
    long &r = n[1]; // la variable r est une variable de reference. Un alias de n[1] i.e on la meme adresse
    long *p = n;    // la viarable p est un pointeur. il pointe sur le 1er element du tableau n[0]

    r = r / 10;        // i.e r = r/10 = n[1]/10 = 3000 / 10 = 300 = n[1]
    p = p + 2;         // i.e p pointe sur le 3e element (n[2]=4000)
    *p = r + n[0] / 2; // n[2] = 300 + 2000/2 = 1300

    cout << n[2] << " " << r << " " << *p << endl; // n[2] = 1300 | r = 300 | *p = 1300

    return 0;
}