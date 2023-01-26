#include <iostream>
#include <vector>

using namespace std;

// ================ QUESTION 1 ==========================

// Definition de la Classe BUCH

class Buch
{
private:
    string titel;

public:
    Buch(string t) : titel(t){};
    string getTitel() { return titel; };
    void ausgabeBuch() { cout << "Buch Titel : " << titel << endl; };
};

// Definition de la Classe Student

class Student
{
private:
    string name;
    Buch *reserviert[5]; // On peut reserver 5 Livres
    int anzreserviert;   // Variables qui stocke le nombre de livre réservé

public:
    Student(string n) : name(n), anzreserviert(0){};
    string getName() { return name; };

    /* ========== METHODES D'OBJET ================ */

    // Presentation de l'Etudiant
    void ausgabeStudent() { cout << "Student name : " << name << endl; };

    // Reservation d'un Livre
    void reserviert_buch(Buch *bch)
    {
        if (anzreserviert > 5)
            cout << "Sie haben reserviert 5 Buch\n";
        else
        {
            reserviert[anzreserviert] = bch;
            anzreserviert++; // on incrémente le nbre de livre réservé
        }
    };

    // Annulation d'une Reservation
    void deleteReserviert(int nr)
    {
        if (reserviert[nr - 1] != NULL)
        {
            cout << "\nDelete reserviert Buch ' " << reserviert[nr - 1]->getTitel() << " '" << endl;
            reserviert[nr - 1] = NULL;

            for (int i = nr - 1; i < anzreserviert - 1; i++)
            {
                reserviert[i] = reserviert[i + 1];
            }
            anzreserviert--; // on diminue le nbre de livre réservé
        }
    }

    // Consulter la liste des reservations
    void reservierungen_liste()
    {
        if (anzreserviert == 0) // Si on a réservé aucun livre
            cout << "\nStudent " << getName() << " reserviert Nacht Buch." << endl;

        if (anzreserviert > 0) // Si on a réservé au moins 1 livre
        {
            cout << "\nStudent " << getName() << " reserviert:" << endl;

            for (int i = 0; i < anzreserviert; i++)
            {
                if (reserviert != NULL) // On affiche la liste des livre réservés
                    cout << "-" << reserviert[i]->getTitel() << endl;
            }
        }
    }
};

int main(int argc, char **argv)
{
    cout << "\n============== QUESTION 1 ================ \n";

    Buch Bch("The way to the moon"); // On declare un livre Bch avec pour titre "The way to the moon"

    Student student_1("Meier"); // On declare un Etudiant student_1 qui s'appelle "Meier"

    student_1.reserviert_buch(&Bch); // Un etudiant reserve 1 livre ("The way to the moon")

    student_1.reservierungen_liste(); // liste des reservations

    student_1.deleteReserviert(1); // Annulation d'une Reservation

    student_1.reservierungen_liste(); // liste des reservations

    cout << "\n============== QUESTION 2 ================ \n\n";

    // Creation d'un Vecteur d'Etudiants
    vector<Student> students;

    // Ajout de 3 Etudiants au vecteur
    students.push_back(Student("Herve"));
    students.push_back(Student("Chelsea"));
    students.push_back(Student("KingsMan"));

    cout << "il ya : " << students.size() << " Etudiants" << endl;

    cout << "\nCes etudiants sont : " << endl;
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].getName() << endl;
    }

    return 0;
}