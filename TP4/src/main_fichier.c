/*
Exercice 4.2 [★]

Fichier : fichier_main.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Implementer les fonctions sur les fichiers

Compilation:  gcc -o fichier main_fichier.c fichier.c
*/

// Il faut inclure les bibliothéques suivantes:

#include <stdio.h>

// Il faut inclure le fichier fichier.h pour avoir les fonctions 'lire_fichier' et 'ecrire_dans_fichier'
#include "fichier.h"

// Programme principal
int main()
{
    // On fait un petit menu pour demander à l'utilisateur s'il veut lire ou ecrire un fichier.
    printf("*************** Menu **************\n");
    printf("1. Lire un fichier\n");
    printf("2. Ecrire dans un fichier\n");
    printf("***********************************\n");

    int choix;

    // On stocke le nom du fichier et le message dans des tableau de chaines (char)
    char nom_fichier[30], message[256];

    printf("Choix : ");
    scanf("%d", &choix);

    // Selon le choix, on execute ce qui se trouve apres les intsructions 'case'
    switch (choix)
    {

    // Si le choix == 1, on lit le contenu du fichier, dont le nom est donné par l'utilisateur.
    case 1:
        printf("Nom du fichier : ");
        scanf("%s", nom_fichier);
        lire_fichier(nom_fichier);
        break;

    // Si choix == 2, on écrit sur un fichier dont le nom est donné par l'utilisateur.
    case 2:
        printf("Nom du fichier : ");
        scanf("%s", nom_fichier);
        printf("Votre message : ");
        getchar();
        gets(message);
        ecrire_dans_fichier(nom_fichier, message);
        lire_fichier(nom_fichier);
        break;

    // S'il ne fait aucun choix, on arrete le programme
    default:
        printf("Oops !! Vous n'avz fait aucun choix");
        break;
    }

    // On returne 0 si tout s'est bien passé
    return 0;
}