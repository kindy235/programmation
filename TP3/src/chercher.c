/*
Exercice 3.4 [★★]

Fichier : chercher.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Rechercher un entier dans un tableau de 100 entiers
*/

// Inclure les bibliothèques suivants 'stdlib'; 'stdio' et 'time'
#include <stdio.h>
// stdlib contient la fonction 'rand()'
#include <stdlib.h>
// La bibliothèque 'time' est utilisée pour fournir les valeurs à rand
#include <time.h>

// Fonction pour affiche les elements d'un tableau d'entiers
// Elle reçoit en entrées un tableau d'eniters et la taille de ce tableau
void printint_array(int array[], int array_size)
{
    for (int k = 0; k < array_size; k++)
    {
        printf("%4d", *(array + k));
    }
}

// Programme principal
int main()
{
    // Generateur de nombres pseudo-aleatoires
    srand(time(NULL));

    printf("\n---------------------------------------");
    printf("\nRecherhe d'un entier");
    printf("\n---------------------------------------");

    // Declaration du tableau de type int et l'entier à rechercher
    int tableau[100];
    int entier = 0, find = 0;

    // Boucle pour remplir aléatoirement le tableau de 100 entiers
    for (int i = 0; i < 100; i++)
        *(tableau + i) = rand() % 1000;

    printf("\n\nTableau de 100 entiers:\n");

    // On affiche le tableau remplie avec la fonction 'print_array'
    printint_array(tableau, 100);

    // Demande à l'utilisateur de saisir la valeur à rechercher
    printf("\n\nSaisir l'entier a rechercher => ");
    scanf("%d", &entier);

    // Recherche de l'entier
    // Parcourir le tableau des 100 entiers
    for (int j = 0; j < 100; j++)
    {
        // Si la valeur du tableau d'indice j == entier saisi; on met find == 1
        if (tableau[j] == entier)
        {
            find += 1;
        }
    }

    // S'il la trouve pas, affiche le message 'Aucun entier trouve' sinon affiche 'Entier présent !!'
    if (find == 0)
    {
        printf("\nAucun entier trouve");
    }
    else
    {
        printf("\nEntier présent !!\n");
    }

    // On met 2 saut de lignes
    printf("\n\n");

    // Le programme renvoie 0 si tout s'est bien passé.
    return 0;
}