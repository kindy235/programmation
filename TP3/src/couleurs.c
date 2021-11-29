/*
Exercice 2.7 [★★]

Fichier : couleurs.c
Auteur : Aboubacar BAH
Objectif : Initialiser 10 couleurs à l'aide des structures et des tableau.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "couleurs.h"

// Fonction de remplissage du tableau des couleurs
void colors_fill(couleur colors[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        // La fonction rand me permet de generer des nombre aléatoires compris entre 0 et 255
        colors[i].rouge = rand() % 0xff;
        colors[i].vert = rand() % 0xff;
        colors[i].bleu = rand() % 0xff;
        colors[i].alpha = rand() % 0xff;
        colors[i].compteur = 1;
    }
}

// Fonction pour l'affichage des couleurs, elle reçoit en entrées le tableau de strcutures couleur
// et sa taille, elle ne renvoie rien en sortie.
void colors_print(couleur colors[], int array_size)
{
    for (int j = 0; j < array_size; j++)
    {
        printf("\n---------------------------------------");
        printf("\n\nCouleur (%d) => 0x%x 0x%x 0x%x 0x%x", j + 1, colors[j].rouge, colors[j].vert, colors[j].bleu, colors[j].alpha);
    }
}
