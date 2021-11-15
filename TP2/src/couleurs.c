/*
Exercice 2.7 [★★]

Fichier : couleurs.c
Auteur : Aboubacar BAH
Objectif : Initialiser 10 couleurs à l'aide des structures et des tableau.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definition d'un nouveau type de variable [couleur] à l'aide des structures
typedef struct couleur
{
    // Un couleur est codé sur un octet, donc de 0 à 255,
    // il faut donc un type de variable sur un octet [char]
    // contenant uniquement des valeurs positifs [unsigned]
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
} couleur;

// Fonction de remplissage du tableau des couleurs
void colors_fill(couleur colors[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        // La fonction rand me permet de generer des nombre aléatoires comprise entre 0 et 255
        colors[i].rouge = rand() % 0xff;
        colors[i].vert = rand() % 0xff;
        colors[i].bleu = rand() % 0xff;
        colors[i].alpha = rand() % 0xff;
    }
};

// Fonction pour l'affichage des couleurs, elle reçoit en entrées le tableau de strcutures couleur
// et sa taille, elle ne renvoie rien en sortie.
void colors_print(couleur colors[], int array_size)
{
    for (int j = 0; j < array_size; j++)
    {
        printf("\n---------------------------------------");
        printf("\n\nCouleur %d => RGBA (0x%x, 0x%x, 0x%x, 0x%x)", j + 1, colors[j].rouge, colors[j].vert, colors[j].bleu, colors[j].alpha);
        printf("\nRouge => 0x%x", colors[j].rouge);
        printf("\nVert => 0x%x", colors[j].vert);
        printf("\nBleu => 0x%x", colors[j].bleu);
        printf("\nAlpha => 0x%x", colors[j].alpha);
    }
};

int main()
{
    printf("\n---------------------------------------");
    printf("\nAffichage de couleurs au format RGBA");
    printf("\n---------------------------------------");

    // Déclaration du tableau de strcutures de 10 couleurs
    couleur couleurs[10];

    // Initialisation Generateur de nombres pseudo-aleatoires
    srand(time(NULL));

    //Initialisation des 10 couleurs en Hexadecimal entre 0 et 255 (Un octet)

    colors_fill(couleurs, 10);

    // Color_print est une fonction qui affiche le tableau des couleurs declarées
    colors_print(couleurs, 10);

    printf("\n---------------------------------------\n\n");

    return 0;
}