/*
Exercice 4.2 [★]

Fichier : fichier_main.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Implementer les fonctions sur les fichiers

Compilation:  gcc -o fichier fichier_main.c fichier.c
*/

#include <stdio.h>
#include "fichier.h"

int main()
{
    printf("*************** Menu **************\n");
    printf("1. Lire un fichier\n");
    printf("2. Ecrire dans un fichier\n");
    printf("***********************************\n");

    int choix;
    char nom_fichier[30], message[256];

    printf("Choix : ");
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        printf("Nom du fichier : ");
        scanf("%s", nom_fichier);
        lire_fichier(nom_fichier);
        break;

    case 2:
        printf("Nom du fichier : ");
        scanf("%s", nom_fichier);
        printf("Votre message : ");
        getchar();
        gets(message);
        ecrire_dans_fichier(nom_fichier, message);
        lire_fichier(nom_fichier);
        break;

    default:
        printf("Oops !! Vous n'avz fait aucun choix");
        break;
    }

    // char *message = "J'ecris n'importe quoi pour n'importe qui et n'importe quand.";

    return 0;
}