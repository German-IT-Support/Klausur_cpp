#include <iostream>

using namespace std;

/**
 * Question 1 :
 *
 * La classe Ville (Staedte) doit jouer le role de Sujet.
 * La classe Carte (Karte?) doit jouer le role de Observateur car la carte est mise a jour
 * en fonction des donnees issues des villes.
 *
 * Question 2:
 *
 * Pour implementer les classes Ville et Carte a partir des classes Generales (Interfaces)
 * Sujet (Subjekt) et Observateur (Beobachter), On precedera ainsi :
 *
 * La classe Ville va heriter de la classe Sujet (Subjekt)
 * La classe Carte va heriter de la classe Observateur (Beobachter)
 *
 * Question 3:
 *
 * Dans la classe generale Observateur, La methode purement virtuelle "void aktualisiere()"
 * doit etre implementee comme suite :
 *
 * virtual void aktualisiere() = 0;
 *
 * Question 4:
 *
 * La classe Observateur (Beobachter) etant devenue une classe Abstraite les conséquences sont :
 *
 * - On ne peut pas creer une instance (objet) de cette classe
 * - Les methodes de cette classe seront definies/implementées dans la classe fille/heritiere Carte.
 * -
 *
 * Question 5:
 *
 * a).
 * b). La classe carte dépend de la classe villes. (Vraie)
 *
 *
 */

class Observer;

class Subject
{

public:
    virtual void registerObserver(Observer *observer) = 0;

    virtual void removeObserver(Observer *observer) = 0;

    /** Notify all the registered observers when a change happens*/
    virtual void notifyObservers() = 0;
};

/** Interface for the Observer */
class Observer
{

public:
    virtual void aktualisiere() = 0;
};

/** Class Ville herite de Sujet*/
class Staedte : Subject
{
};

/** Class Carte herite de Observateur*/
class Karte : Observer
{

public:
    void aktualisiere()
    {
        /** Instructions de MAJ */
    }
};