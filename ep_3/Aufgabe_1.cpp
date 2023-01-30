#include <iostream>

using namespace std;

// Question 1.1 - Surcharge de la fonction gesamtwiderstand

float gesamtwiderstand(float r1, float r2)
{
    return r1 + r2;
}

float gesamtwiderstand(float r1, float r2, int k)
{
    // k == 1, Calcul resistance en SERIE
    if (k == 1)
    {
        return r1 + r2;
    }
    else if (k == 0)
    {
        // k == 0, Calcul resistance en PARALELLE
        return 1 / (1 / r1 + 1 / r2);
    }
}

// Question 1.2 - Fonction avec Valeur PAR DEFAUT

/* float gesamtwiderstand(float r1, float r2, int k = 1)
{
    // k == 1, Calcul resistance en SERIE
    if (k == 1)
    {
        return r1 + r2;
    }
    else if (k == 0)
    {
        // k == 0, Calcul resistance en PARALELLE
        return 1 / (1 / r1 + 1 / r2);
    }
}  */

int main(int argc, char **argv)
{
    float r1 = 100, r2 = 200;

    cout << "\n============== QUESTION 1 ================ \n\n";

    cout << "SERIE : r1 = " << r1 << " , r2 = " << r2 << ". Req = " << gesamtwiderstand(r1, r2) << " ohms" << endl;
    cout << "PARAL : r1 = " << r1 << " , r2 = " << r2 << ". Req = " << gesamtwiderstand(r1, r2, 0) << " ohms" << endl;

    cout << "\n============== QUESTION 2 ================ \n\n";

    long n[3] = {300, 200, 100}; // tableau n de 3 nombres
    long &r = n[0];              // Variable de ref r (alias sur n[0]) i.e on la meme adresse
    long *p = &n[2];             // pointeur p pointe sur n[2]

    n[1] = r / 2;  // n[1] = r/2 = n[0]/2 = 300/2 = 150
    p = p - 1;     // i.e p qui pointait n[2] pointe sur n[1]
    r = *p + n[0]; // r = n[0] = 150 + 300 = 450

    cout << n[0] << " " << n[1] << " " << r << endl; // n[0] = 450 | n[1] = 150 | r = 450

    return 0;
}