/*
Exercice 3.7 [★★★]

Fichier : recherche_dichotomique.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Rechercher par dichotomie un entier dans un tableau de 100 entier
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction pour afficher les elements d'un tableau d'entiers
void printint_array(int array[], int array_size)
{
    for (int k = 0; k < array_size; k++)
    {
        printf("%4d", *(array + k));
    }
}

// Fonction pour trier par ordre alphanumerique un tableau d'entiers
void tri(int array[], int array_size)
{
    int i, j, temp;
    for (i = 0; i < array_size - 1; i++)
    {
        for (j = i + 1; j < array_size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main()
{
    // Initialisation du Generateur de nombres pseudo-aleatoires
    srand(time(NULL));

    printf("\n---------------------------------------");
    printf("\nRecherhe dichotomique d'un entier dans un tableau trie");
    printf("\n---------------------------------------");

    // Declaration du tableau type int et l'entier à rechercher
    // Les variables debut et fin contient les debuts et fin des indices du tableaux, elles sont utililées
    // pour la recherche dichotomique. La variale mil contient contient l'indice entre le debut et la fin
    int tableau[100];
    int entier = 0, find = 0, debut = 0, fin = 100, mil = 0;

    // Boucle pour remplir aleatoirement le tableau de 100 entiers
    for (int i = 0; i < 100; i++)
        *(tableau + i) = rand() % 1000;

    printf("\n\nTableau de 100 entiers:\n");
    printint_array(tableau, 100);

    // Trie du tableau par ordre croissant
    tri(tableau, 100);

    printf("\n\nTableau de 100 entiers tries:\n");
    printint_array(tableau, 100);

    // Demande à l'utilisateur de saisir la valeur recherchée
    printf("\n\nSaisir l'entier a rechercher => ");
    scanf("%d", &entier);

    // Recherche de l'entier par dichotomie
    while (find == 0 && debut <= fin)
    {
        mil = (debut + fin) / 2;
        if (tableau[mil] == entier)
        {
            find = 1;
        }
        else
        {
            if (entier > tableau[mil])
            {
                debut = mil + 1;
            }
            else
            {
                fin = mil - 1;
            }
        }
    }

    // Verifie si l'entier est present ou pas.
    if (find == 0)
    {
        printf("\nAucun entier trouve");
    }
    else
    {
        printf("\nEntier présent\n");
    }

    printf("\n\n");

    return 0;
}