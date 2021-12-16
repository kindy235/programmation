/*
Exercice 3.7 [★★★]

Fichier : couleur_compteur.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Compteur les differentes couleurs distinctes et les affiche
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// "couleurs.h" est un fichier header contenant la strcuture couleurs et les differentes fonctions associées.
// Pour compiler : gcc -o couleur_compteur couleur_compteur.c couleurs.c
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

    // On remplie le tableau de couleurs de manieres aleatoires avec la fonction "colors_fill"
    colors_fill(couleurs, 100);

    // On definie trois couleurs qui vont se repeter de maniere aleatoires parmis les 100 couleurs
    for (int k = 0; k < 100; k++)
    {
        int i = rand() % 100;
        int j = rand() % 100;
        int s = rand() % 100;
        couleurs[i].rouge = 0xff;
        couleurs[i].vert = 0x23;
        couleurs[i].bleu = 0x23;
        couleurs[i].alpha = 0x45;

        couleurs[j].rouge = 0xff;
        couleurs[j].vert = 0x00;
        couleurs[j].bleu = 0x23;
        couleurs[j].alpha = 0x45;

        couleurs[s].rouge = 0xaa;
        couleurs[s].vert = 0x00;
        couleurs[s].bleu = 0x22;
        couleurs[s].alpha = 0x45;
    }

    // On affiche les 100 couleurs à l'aide de la fonction "colors_print"
    colors_print(couleurs, 100);

    // Compoteur[],tableau pour compteur le nombres d'apparition d'une couleur
    int compteur[100] = {0};

    // Tableau pour Verifier si une couleur a été dèjà compté ou pas
    int doublon[100] = {0};

    // Boucles pour le comptage et l'affichage des couleurs semblables
    int i, j;
    for (i = 0; i < 100; i++)
    {
        if (doublon[i] == 0)
        {
            for (j = 0; j < 100; j++)
            {
                if (couleurs[i].rouge == couleurs[j].rouge && couleurs[i].vert == couleurs[j].vert && couleurs[i].bleu == couleurs[j].bleu && couleurs[i].alpha == couleurs[j].alpha)
                {
                    if (compteur[i] > 0)
                    {
                        doublon[j] = 1;
                    }
                    compteur[i] += 1;
                }
            }
            printf("\n\n0x%x 0x%x 0x%x 0x%x %d", couleurs[i].rouge, couleurs[i].vert, couleurs[i].bleu, couleurs[i].alpha, compteur[i]);
        }
    }

    printf("\n\n");

    return 0;
}