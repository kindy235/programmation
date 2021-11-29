/*
Exercice 3.4 [★★]

Fichier : chaercher.c
Auteurs : Aboubacar BAH, ....
Objectif : Rechercher par dichotomie un entier dans un tableau de 100 entier
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
    // Generateur de nombres pseudo-aleatoires
    srand(time(NULL));

    printf("\n---------------------------------------");
    printf("\nRecherhe dichotomique d'un entier dans un tableau trie");
    printf("\n---------------------------------------");

    // Declaration de deux tableaux de types int et l'entier à rechercher

    int tableau[100];
    int entier = 0, find = 0, debut = 0, fin = 100, mil = 0;

    // Boucle pour remplir le tableau de 100 entiers
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

    // Recherche de l'entier
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

    // printf("%d entier trouve\n", find);
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