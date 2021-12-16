/*
Exercice 4.3 [★★]

Fichier : etudiant_bd.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Enregister les données des etudiants dans un tableau

Compiliation: gcc -o .\etudiant_bd .\etudiant_bd.c .\fichier.c
*/

// Il faut inclure les bibliothéques suivantes:

#include <stdio.h>
#include <stdlib.h>

// Il faut inclure le fichier fichier.h et etudiant2.h pour avoir les fonctions 'lire_fichier', 'ecrire_dans_fichier' et à la structure 'couleur'
#include "fichier.h"
#include "etudiant2.h"

// Programme principal
int main()
{
    // On declare un tableau de 5 etudiants
    etudiant etudiants[5];

    // On demande à l'utilisateur d'entrer les informations des 5 etudiants (Nom, prenom,...)
    printf("Donnez informations etudiants\n\n");
    printf("Format: Nom, Prenom, adresse, note1, note2");

    // Avec une bouvle for, on parcours le tableau de 5 etudiants
    for (int i = 0; i < 5; i++)
    {
        // Pour chaque etudiant, on demande à l'utilisateur d'entrer les informations des 5 etudiants (Nom, prenom,...)
        printf("\n\nEtudiant %d : ", i + 1);

        printf("\nNom : ");
        scanf("%s", etudiants[i].nom);

        printf("Prenom : ");
        scanf("%s", etudiants[i].prenom);
        getwchar();

        printf("Adresse : ");
        gets(etudiants[i].adresse);

        printf("Note syteme : ");
        scanf("%s", etudiants[i].notes.system);

        printf("Note programmation : ");
        scanf("%s", etudiants[i].notes.prog);

        // Une fois les informations fournies, on les enregistre dans le fichier 'etudiant_bd.txt'
        ecrire_dans_fichier("etudiant_bd.txt", etudiants[i].nom);
        ecrire_dans_fichier("etudiant_bd.txt", ", ");
        ecrire_dans_fichier("etudiant_bd.txt", etudiants[i].prenom);
        ecrire_dans_fichier("etudiant_bd.txt", ", ");
        ecrire_dans_fichier("etudiant_bd.txt", etudiants[i].adresse);
        ecrire_dans_fichier("etudiant_bd.txt", ", ");
        ecrire_dans_fichier("etudiant_bd.txt", etudiants[i].notes.prog);
        ecrire_dans_fichier("etudiant_bd.txt", ", ");
        ecrire_dans_fichier("etudiant_bd.txt", etudiants[i].notes.system);
        ecrire_dans_fichier("etudiant_bd.txt", "\n");
    }

    // Boucle pour afficher le tableau des etudiants
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\n---------------------------------------");
    //     printf("\n\nEtudiant %d", i + 1);
    //     printf("\nNom => %s", etudiants[i].nom);
    //     printf("\nPrenom => %s", etudiants[i].prenom);
    //     printf("\nAdresse => %s", etudiants[i].adresse);
    //     printf("\nNote 1 : Programmation C => %s", etudiants[i].notes.prog);
    //     printf("\nNote 2 : Systeme d'exploitation => %s", etudiants[i].notes.system);
    // }

    // Une fois remplie, on lit le fichier via la fonction 'lire_fichier'
    lire_fichier("etudiant_bd.txt");

    return 0;
}