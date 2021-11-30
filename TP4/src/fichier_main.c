/*
Exercice 4.2 [★]

Fichier : fichier_main.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Implementer les fonctions sur les fichiers
*/

#include <stdio.h>
#include "fichier.h"

int main()
{
    char nom_fichier[30];
    printf("Nom fichier : ");
    scanf("%s", nom_fichier);
    char *message = "Je t'emmerdes";

    // lire_fichier(nom_fichier);

    ecrire_dans_fichier(nom_fichier, message);

    lire_fichier(nom_fichier);

    return 0;
}