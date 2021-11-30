/*
Exercice 4.2 [★]

Fichier : fichier.h
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Prototypes des fonctions sur les fichiers
*/

// les prototypes des fonctions sur les operateurs

//Pour eviter les inclusions infinies, j'ai utilisé la condition ifndef, qui permet d'inclure une seule fois le fichier .h
#ifndef FICHIER_H
#define FICHIER_H

void lire_fichier(char *nom_de_fichier);

void ecrire_dans_fichier(char *nom_de_fichier, char *message);

#endif