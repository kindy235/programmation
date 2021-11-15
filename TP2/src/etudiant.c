/*
Exercice 2.5 [★★]

Fichier : etudiant.c
Auteur : Aboubacar BAH
Objectif : Gerer des données de 5 etudiants à l'aide des tableaux.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Generateur de nombres pseudo-aleatoires
    srand(time(NULL));

    // Initialisation des tableaux

    // Tableaux de char en 2 dimensions pour stocker :

    // Les noms
    char noms[5][30] = {
        "MEYER",
        "LUNNEL",
        "KLEMARTIEN",
        "LAMARTINE",
        "ALEMBERT"};
    // Les prenoms
    char prenoms[5][30] = {
        "Rudolf",
        "Alice",
        "Kindy",
        "Jacques",
        "Albert"};

    // Les adresses
    char adresses[5][50] = {
        "18 rue salomom, 69001 Lyon",
        "18 rue Fourier, 69008 Lyon",
        "22 Avenue Galactic, 69003 Lyon", "24 rue Galileo, 69005",
        "18 rue Einstein, 69005 Lyon"};

    // Les notes
    short notes[5][2] = {
        {rand() % 20, rand() % 20},
        {rand() % 20, rand() % 20},
        {rand() % 20, rand() % 20},
        {rand() % 20, rand() % 20},
        {rand() % 20, rand() % 20},
    };

    printf("\n---------------------------------------");
    printf("\nGestion etudiants");
    printf("\n---------------------------------------");

    //Affichage des données etudiants via une boucle for
    for (int i = 0; i < 5; i++)
    {
        printf("\n---------------------------------------");
        printf("\n\nEtudiant %d", i + 1);
        printf("\nNom => %s", noms[i]);
        printf("\nPrenom => %s", prenoms[i]);
        printf("\nAdresse => %s", adresses[i]);
        printf("\nNote 1 : Programmation => %i", notes[i][0]);
        printf("\nNote 2 : Systeme => %i", notes[i][1]);
    }

    return 0;
}