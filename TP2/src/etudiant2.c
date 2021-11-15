/*
Exercice 2.6 [★★]

Fichier : etudiant2.c
Auteur : Aboubacar BAH
Objectif : Gerer des données de 5 etudiants à l'aide des structures.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct etudiant
{
    char nom[30];
    char prenom[30];
    char adresse[50];
    struct notes
    {
        short prog;
        short system;
    } notes;

    // short notes[2];
} etudiant;

int main()
{
    // Generateur de nombres pseudo-aleatoires
    srand(time(NULL));
    printf("\n---------------------------------------");
    printf("\nGestion etudiants");
    printf("\n---------------------------------------");

    // Déclaration du tableau de strcutures de 5 étudiants
    etudiant etudiants[5];

    // Initialisation

    // Etudiant 1
    strcpy(etudiants[0].nom, "MEYER");
    strcpy(etudiants[0].prenom, "Rudolf");
    strcpy(etudiants[0].adresse, "18 rue salomom, 69001 Lyon");
    etudiants[0].notes.prog = rand() % 20;
    etudiants[0].notes.system = rand() % 20;

    // Etudiant 2
    strcpy(etudiants[1].nom, "LUNNEL");
    strcpy(etudiants[1].prenom, "Alice");
    strcpy(etudiants[1].adresse, "18 rue Fourier, 69008 Lyon");
    etudiants[1].notes.prog = rand() % 20;
    etudiants[1].notes.system = rand() % 20;

    // Etudiant 3
    strcpy(etudiants[2].nom, "KLEMARTIEN");
    strcpy(etudiants[2].prenom, "Kindy");
    strcpy(etudiants[2].adresse, "22 Avenue Galactic, 69003 Lyon");
    etudiants[2].notes.prog = rand() % 20;
    etudiants[2].notes.system = rand() % 20;

    // Etudiant 4
    strcpy(etudiants[3].nom, "LAMARTINE");
    strcpy(etudiants[3].prenom, "Jacques");
    strcpy(etudiants[3].adresse, "24 rue Galileo, 69005");
    etudiants[3].notes.prog = rand() % 20;
    etudiants[3].notes.system = rand() % 20;

    // Etudiant 5
    strcpy(etudiants[4].nom, "ALEMBERT");
    strcpy(etudiants[4].prenom, "Albert");
    strcpy(etudiants[4].adresse, "18 rue Einstein, 69005 Lyon");
    etudiants[4].notes.prog = rand() % 20;
    etudiants[4].notes.system = rand() % 20;

    for (int i = 0; i < 5; i++)
    {
        printf("\n---------------------------------------");
        printf("\n\nEtudiant %d", i + 1);
        printf("\nNom => %s", etudiants[i].nom);
        printf("\nPrenom => %s", etudiants[i].prenom);
        printf("\nAdresse => %s", etudiants[i].adresse);
        printf("\nNote 1 : Programmation => %i", etudiants[i].notes.prog);
        printf("\nNote 2 : Systeme => %i", etudiants[i].notes.system);
    }

    printf("\n---------------------------------------\n\n");

    return 0;
}