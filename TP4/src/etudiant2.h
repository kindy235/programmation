/*
Exercice 4.1 [★]

Fichier : operator.h
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Prototypes des fonctions somme, produit...
*/

// les prototypes des fonctions sur les operateurs

// Pour eviter les inclusions infinies, j'ai utilisé la condition ifndef, qui permet d'inclure une seule fois le fichier .h
#ifndef ETUDIANT_H
#define ETUDIANT_H

typedef struct etudiant
{
    char nom[30];
    char prenom[30];
    char adresse[50];
    struct notes
    {
        char prog[3];
        char system[3];
    } notes;

} etudiant;

#endif