// les prototypes des fonctions sur les couluers

//Pour eviter les inclusions infinies, j'ai utilisé la condition ifndef, qui permet d'inclure une seule fois le fichier .h
#ifndef COLOR_H
#define COLOR_H

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
void colors_fill(couleur colors[], int array_size);

// Fonction pour l'affichage des couleurs, elle reçoit en entrées le tableau de strcutures couleur
// et sa taille, elle ne renvoie rien en sortie.
void colors_print(couleur colors[], int array_size);

#endif