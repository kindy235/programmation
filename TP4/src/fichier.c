/*
Exercice 4.2 [★]

Fichier : fichier.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Implementer les fonctions sur les fichiers
*/

#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

void lire_fichier(char *nom_de_fichier)
{
    char ch;
    FILE *mon_fichier = fopen(nom_de_fichier, "r");
    if (!mon_fichier)
    {
        printf("oops, %s n'existe pas\n", nom_de_fichier);
        exit(-1);
    }
    printf("Le contenu du fichier %s est:\n", nom_de_fichier);

    while ((ch = fgetc(mon_fichier)) != EOF)
        printf("%c", ch);

    fclose(mon_fichier);
}

void ecrire_dans_fichier(char *nom_de_fichier, char *message)
{
    // char ch;
    FILE *mon_fichier = fopen(nom_de_fichier, "w");
    if (!mon_fichier)
    {
        printf("oops, %s n'existe pas\n", nom_de_fichier);
        exit(-1);
    }

    fputs(message, mon_fichier);

    fclose(mon_fichier);
}