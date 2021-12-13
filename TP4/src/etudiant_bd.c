/*
Exercice 4.3 [★★]

Fichier : etudiant_bd.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Enregister les données des etudiants dans un tableau

Compiliation: gcc -o .\etudiant_bd .\etudiant_bd.c .\fichier.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"
#include "etudiant2.h"

int main()
{
    etudiant etudiants[5];

    printf("Donnez informations etudiants\n\n");
    printf("Format: Nom, Prenom, adresse, note1, note2");
    for (int i = 0; i < 5; i++)
    {
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

    lire_fichier("etudiant_bd.txt");
}