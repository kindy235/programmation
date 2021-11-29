/*
Exercice 3.7 [★★★]

Fichier : couleur_compteur.c
Auteurs : Aboubacar BAH, ....
Objectif : Rechercher par dichotomie un entier dans un tableau de 100 entier
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "couleurs.h"

int main()
{
    // Generateur de nombres pseudo-aleatoires
    srand(time(NULL));

    printf("\n---------------------------------------");
    printf("\nCompteur de couleurs");
    printf("\n---------------------------------------");

    // Declaration d'un tableaux de 100 couleurs
    couleur couleurs[100];
    colors_fill(couleurs, 100);
    colors_print(couleurs, 100);

    int i, j;
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (i != j && couleurs[i].rouge == couleurs[j].rouge && couleurs[i].vert == couleurs[j].vert && couleurs[i].bleu == couleurs[j].bleu && couleurs[i].alpha == couleurs[j].alpha)
            {
                couleurs[i].compteur += couleurs[j].compteur;
                printf("\n\nCouleur %d => 0x%x 0x%x 0x%x 0x%x %d", i + 1, couleurs[i].rouge, couleurs[i].vert, couleurs[i].bleu, couleurs[i].alpha, couleurs[i].compteur);
            }
        }
    }

    // printf("\nCompteur de couleurs");
    printf("\n\n");

    return 0;
}