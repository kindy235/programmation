/*
Exercice 3.5 [★★★]

Fichier : recherche_dichotomique.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Rechercher par dichotomie un entier dans un tableau de 100 entiers
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

// Fonction pour trier par ordre croissant un tableau d'entiers
// Elle reçoit en entrées un tableau d'eniters et la taille de ce tableau
void tri(int array[], int array_size)
{
    int i, j, temp;
    // Parcourir le tableau d'entiers
    for (i = 0; i < array_size - 1; i++)
    {
        // Parcourir à partir de l'indice suivant l'indice 'i' jusqu'à la fin d'indice du tableau
        for (j = i + 1; j < array_size; j++)
        {
            // Si la valeur de la tab d'indice 'i' est > a la valeur de la tab d'indice 'j',
            // on rentre dans la condition et tmp (variable temporaire) prend la valeur de la tab d'indice 'i', la tab d'indice 'i' prend la valeur de la tab d'indice 'j' et la tab d'indice 'j' prend la valeur de tmp.
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Programme principal
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
        // On cherche le milieu du tableau
        mil = (debut + fin) / 2;
        // Si la velur du milieu du tableau
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

    // On met 2 saut de lignes
    printf("\n\n");

    // Le programme renvoie 0 si tout s'est bien passé.
    return 0;
}