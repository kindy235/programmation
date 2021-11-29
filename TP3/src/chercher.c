/*
Exercice 3.4 [★★]

Fichier : chaercher.c
Auteurs : Aboubacar BAH, ....
Objectif : Rechercher un entier dans un tableau de 100 entier
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Affiche les elements d'un tableau d'entier
void printint_array(int array[], int array_size)
{
    for (int k = 0; k < array_size; k++)
    {
        printf("%4d", *(array + k));
    }
}

int main()
{
    // Generateur de nombres pseudo-aleatoires
    srand(time(NULL));

    printf("\n---------------------------------------");
    printf("\nRecherhe d'un entier");
    printf("\n---------------------------------------");

    // Declaration de deux tableaux de types int et l'entier à rechercher

    int tableau[100];
    int entier = 0, find = 0;

    // Boucle pour remplir le tableau de 100 entiers
    for (int i = 0; i < 100; i++)
        *(tableau + i) = rand() % 1000;

    printf("\n\nTableau de 100 entiers:\n");
    printint_array(tableau, 100);

    // Demande à l'utilisateur de saisir la valeur recherchée
    printf("\n\nSaisir l'entier a rechercher => ");
    scanf("%d", &entier);

    // Recherche de l'entier
    for (int j = 0; j < 100; j++)
    {
        if (tableau[j] == entier)
        {
            find += 1;
        }
    }

    // printf("%d entier trouve\n", find);
    if (find == 0)
    {
        printf("\nAucun entier trouve");
    }
    else
    {
        printf("\nEntier présent !!\n");
    }

    printf("\n\n");

    return 0;
}