/*
Exercice 3.7 [★★★]

Fichier : couleur_compteur.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Compteur les differentes couleurs distinctes et les affiche
*/

// Inclure les bibliothèques suivants 'stdlib'; 'stdio' et 'time'
#include <stdio.h>
// stdlib contient la fonction 'rand()'
#include <stdlib.h>
// La bibliothèque 'time' est utilisée pour fournir les valeurs à rand
#include <time.h>
// "couleurs.h" est un fichier header contenant la strcuture couleurs et les differentes fonctions associées.
#include "couleurs.h"
// Pour compiler : gcc -o couleur_compteur couleur_compteur.c couleurs.c

// Programme principal
int main()
{
    // Generateur de nombres pseudo-aleatoires
    srand(time(NULL));

    printf("\n---------------------------------------");
    printf("\nCompteur de couleurs");
    printf("\n---------------------------------------");

    // Declaration d'un tableaux de 100 couleurs
    couleur couleurs[100];

    // On remplie le tableau de couleurs de manière aléatoires avec la fonction "colors_fill"
    colors_fill(couleurs, 100);

    // Afin d'avoir des couleurs repetitives; on definie trois couleurs qui vont se repéter de maniére aléatoires parmis les 100 couleurs
    for (int k = 0; k < 100; k++)
    {
        // i, j et s contient trois indices pour selectionner aléatoirement trois couleurs à modifier
        int i = rand() % 100;
        int j = rand() % 100;
        int s = rand() % 100;

        // A chaque parcours de la boucle, on attribue les memes valeurs à chaque i-eme, j-ieme et s-ieme couleurs.
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

    // Compteur[],tableau pour compteur le nombres d'apparition d'une couleur
    int compteur[100] = {0};

    // Tableau pour Verifier si une couleur a été dèjà compté ou pas
    int doublon[100] = {0};

    // Boucles pour le comptage et l'affichage des couleurs semblables
    int i, j;
    // On parcours les 100 couleurs
    for (i = 0; i < 100; i++)
    {
        // S'il n'y a pas de doublon on fait le compte
        if (doublon[i] == 0)
        {
            // On va comparer couleurs[i] à chaque couleurs du tableau
            for (j = 0; j < 100; j++)
            {
                // S'il y a une couleur identique couleurs[i]==couleurs[j], alors on incremente le compteur
                if (couleurs[i].rouge == couleurs[j].rouge && couleurs[i].vert == couleurs[j].vert && couleurs[i].bleu == couleurs[j].bleu && couleurs[i].alpha == couleurs[j].alpha)
                {
                    // Si le compteur[i], associé à couleurs[i], est > 0, on met doublon==1 pour ne pas la recompter qu'une fois
                    if (compteur[i] > 0)
                    {
                        doublon[j] = 1;
                    }
                    compteur[i] += 1;
                }
            }
            // Ensuite on affiche la couleur et le nombre de fois qu'elle apparait dans le tableau
            printf("\n\n0x%x 0x%x 0x%x 0x%x %d", couleurs[i].rouge, couleurs[i].vert, couleurs[i].bleu, couleurs[i].alpha, compteur[i]);
        }
    }

    printf("\n\n");

    return 0;
}