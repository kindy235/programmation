/*
Exercice 3.7 [★★★]

Fichier : couleur_compteur.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Rechercher par dichotomie un entier dans un tableau de 100 entier
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "couleurs.h"

// void colors_compteur(couleur colors[], int array_size)
// {
//     int i, j, once = 0, match = 0, matchancien = -1;
//     for (i = 0; i < array_size; i++)
//     {
//         if (colors[i].compteur != 1)
//         {
//             printf("\n\nCouleur %d => 0x%x 0x%x 0x%x 0x%x %d", i + 1, colors[i].rouge, colors[i].vert, colors[i].bleu, colors[i].alpha, colors[i].compteur);
//         }

//         // for (j = 0; j < array_size; j++)
//         // {
//         //     // i != j && colors[i].rouge == colors[j].rouge && colors[i].vert == colors[j].vert && colors[i].bleu == colors[j].bleu && colors[i].alpha == colors[j].alpha && colors[i].compteur == colors[j].compteur
//         //     if (i != j && colors[i].compteur != colors[j].compteur)
//         //     {
//         //         printf("\n\nCouleur %d => 0x%x 0x%x 0x%x 0x%x %d", i + 1, colors[i].rouge, colors[i].vert, colors[i].bleu, colors[i].alpha, colors[i].compteur);
//         //     }
//         // }
//         // else
//         // {
//         //     printf("\n\nCouleur %d => 0x%x 0x%x 0x%x 0x%x %d", i + 1, colors[i].rouge, colors[i].vert, colors[i].bleu, colors[i].alpha, colors[i].compteur);
//         //     matchancien = match;
//         // }

//         // if (colors[i].compteur != 1)
//         // {
//         //     printf("\n\nCouleur %d => 0x%x 0x%x 0x%x 0x%x %d", i + 1, colors[i].rouge, colors[i].vert, colors[i].bleu, colors[i].alpha, colors[i].compteur);
//         // }
//         // once = 1;
//         //     break;
//         // }
//         // if (match != 0)
//         // {
//         //     once = 1;
//         //     printf("\n\nCouleur %d => 0x%x 0x%x 0x%x 0x%x %d", i + 1, colors[i].rouge, colors[i].vert, colors[i].bleu, colors[i].alpha, colors[i].compteur);
//         // }
//         // printf("\n\nCouleur %d => 0x%x 0x%x 0x%x 0x%x %d", i + 1, colors[i].rouge, colors[i].vert, colors[i].bleu, colors[i].alpha, colors[i].compteur);
//     }
// }

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

    // for (int k = 0; k < 20; k++)
    // {
    //     int r = rand() % 100;
    //     couleurs[r].rouge = 0xff;
    //     couleurs[r].vert = 0x23;
    //     couleurs[r].bleu = 0x23;
    //     couleurs[r].alpha = 0x45;
    // }

    colors_print(couleurs, 100);

    int i, j, match = 0;
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (i != j && couleurs[i].rouge == couleurs[j].rouge && couleurs[i].vert == couleurs[j].vert && couleurs[i].bleu == couleurs[j].bleu && couleurs[i].alpha == couleurs[j].alpha)
            {
                match += 1;
            }
        }
        couleurs[i].compteur += match;
        printf("\n\nCouleur %d => 0x%x 0x%x 0x%x 0x%x %d", i + 1, couleurs[i].rouge, couleurs[i].vert, couleurs[i].bleu, couleurs[i].alpha, couleurs[i].compteur);
        match = 0;
    }

    int tab[100] = {0};

    for (int i = 0; i < 100; i++)
    {

        for (int j = 0; j < 100; j++)
        {
            if (tab[j] == 0)
            {
                tab[j] = couleurs[i].compteur;
            }
            if (tab[j] == couleurs[i].compteur)
            {
                break;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        if (tab[i] != 0)
        {
            printf("\ni= %d\n", tab[i]);
        }
    }

    // colors_compteur(couleurs, 100);

    // printf("\nCompteur de couleurs");
    printf("\n\n");

    return 0;
}