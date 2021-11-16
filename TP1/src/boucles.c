/*
Exercice 1.6 [★★]

Fichier : boucles.c
Auteur : Aboubacar BAH
Objectif : Ce programme affiche un triangle rectangle
*/

#include <stdio.h>

int main()
{
    printf("\n--------------------------------------");
    printf("\nTriangle rectangles");
    printf("\n--------------------------------------\n");

    int compteur = 0;

    printf("Veuillez saisir la taille du triangle (minimum 4) : ");
    scanf("%d", &compteur);

    if (compteur < 4)
    {
        printf("\nTaille du triangle doit être supérieur à 3 !!!\n");
        return 1;
    }

    printf("-----------------------------\n");
    printf("             FOR             \n");
    printf("-----------------------------\n");

    //Boucle for
    for (int i = 1; i < compteur; i++)
    {
        if (i > 1)
        {
            //Partie gauche du triangle
            printf("*");
            //Intérieure du triangle
            for (int j = 2; j < i && i != compteur && i > 2; j++)
            {
                printf("#");
            }
        }
        //Partie droit du triangle
        printf("*\n");
    }

    //Bas du triangle composé par des étoiles
    for (int j = 1; j < compteur; j++)
    {
        printf("*");
    }
    //Dernière du triangle et retour à la ligne
    printf("*\n");

    printf("---------------------------\n");
    printf("           WHILE           \n");
    printf("---------------------------\n");

    int i = 1;
    int j = 0;

    //Boucle while
    //i va nous permettre de compter le nombre de ligne nécessaire
    while (i < compteur)
    {
        //a chaque debut de ligne on met une *
        printf("*");

        //si c'est la 2ème ligne on met une * en plus
        if (i == 2)
        {
            printf("*");
        }

        //si on a depassé la 2eme ligne on va mettre des #
        if (i > 2)
        {
            j = 2;

            //on met des # de la taille de la ligne-1 ou nous nous trouvons en commençant à 2
            while (j < i)
            {
                //Partie gauche du triangle
                printf("#");
                j++;
            }

            //on ajoute l'etoile de fin
            printf("*");
        }

        //on passe à la ligne suivante
        printf("\n");
        i++;
    }

    //on fait la dernière ligne de * qui est de la taille du compteur
    int k = 0;
    while (k < compteur)
    {
        printf("*");
        k++;
    }

    printf("\n---------------------------\n");
    printf("         DO WHILE          \n");
    printf("---------------------------\n");

    i = 1;
    j = 0;

    do
    {
        //a chaque debut de ligne on met une *
        printf("*");

        //si c'est la 2ème ligne on met une * en plus
        if (i == 2)
        {
            printf("*");
        }

        //si on a depassé la 2eme ligne on va mettre des #
        if (i > 2)
        {
            j = 2;

            //on met des # de la taille de la ligne-1 ou nous nous trouvons en commençant à 2
            while (j < i)
            {
                //Partie gauche du triangle
                printf("#");
                j++;
            }

            //on ajoute l'etoile de fin
            printf("*");
        }

        //on passe à la ligne suivante
        printf("\n");
        i++;

    } while (i < compteur);

    //on fait la dernière ligne de * qui est de la taille du compteur
    k = 0;
    do
    {
        printf("*");
        k++;
    } while (k < compteur);

    printf("\n");

    return 0;
}