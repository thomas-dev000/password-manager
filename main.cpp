#include <iostream>
using namespace std;

#include"password_manager.h"

int main()
{
    system("cls"); //Permet de nettoyer la console entre chaque action

    if (Verifier_mot_de_passe_maitre() == 0)
    {
        cout << "Acces refuse. Fermeture du programme." << endl;
        system("pause");
        return 0;
    }

    int choix = 0;
    do 
    {
        cout << "==================================" << endl;
        cout << "   COFFRE FORT DE MOTS DE PASSE   " << endl;
        cout << "==================================" << endl;
        cout << "Si vous souhaitez Ajouter un mot de passe, tapez 1."<<endl;
        cout << "Si vous souhaitez Afficher les mots de passe, tapez 2."<<endl;
        cout << "Si vous souhaitez Supprimer un mot de passe, tapez 3."<<endl;
        cout << "Si vous souhaitez Quitter le coffre fort, tapez 4." << endl << endl;
        cout << "\n--------------------------\n" << endl << endl;
        cout << "Votre choix : ";
        if (!(cin >> choix))
        {
            cin.clear(); // Réinitialise l'état de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore les caractères restants
            cout << endl << "Entrée invalide. Veuillez saisir un chiffre." << endl << endl;
            choix = 0; // Force un passage par défaut dans le switch
        }

        switch (choix)
        {
        case 1: cout << endl << "Ajouter un mot de passe." << endl;
            cout << "\n--------------------------\n" << endl;
            Ajouter_mot_de_passe();
            break;
        case 2: cout << endl << "Afficher les mots de passe." << endl;
            cout << "\n--------------------------\n" << endl;
            Afficher_mot_de_passe();
            break;
        case 3: cout << endl << "Supprimer un mot de passe." << endl;
            cout << "\n--------------------------\n" << endl;
            Supprimer_mot_de_passe();
            break;
        case 4: cout << endl << "Au revoir !" << endl;
            break;
        default:cout << endl << "Choix invalide." << endl;
            break;
        }
    }while(choix != 4);
    system("pause");
    return 0;
}
