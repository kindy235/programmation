/*
Exercice 4.5 [★★]

Fichier : facroriel.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Effectue des calculs factorielles sur des entiers
*/

// Il faut inclure les bibliothéques suivantes:
#include <stdio.h>
#include <stdlib.h>

// Fonction pour calculer le factoriel par la méthode iterative
// L'utilisation du type double me permet d'avoir plus de precision pour de grands nombres.
double itera_fact(double n)
{
    double acc = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n != 0)
        {
            acc *= i;
        }
    }
    return acc;
}

// Fonction pour calculer le factoriel par la méthode recursive
double recur_fact(double n)
{
    // on verifie si n==0
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // La fonction s'appelle elle-meme
        return (n * recur_fact(n - 1));
    }
}

int main()
{

    double nombre;
    int choix;

    // On fait un petit menu pour demander à l'utilisateur quelle methode il souhaite utiliser.
    printf("\n================|Calcul Factoriel|================\n");
    printf("\n======================|Menu|======================\n\n");
    printf("Faites votre choix !\n\n");
    printf("1. Calcul par la methode iterative\n");
    printf("2. Calcul par la methode recursive \n");

    printf("\n--------------------------------------------------\nChoix ? : ");
    scanf("%d", &choix);

    switch (choix)
    {

    case 1:

        printf("\n-------------Methode iterative----------------\n");
        printf("\nEntrer le nombre n pour calculer son factoriel : ");
        scanf("%lf", &nombre);
        // On affiche que la partie entière du resultat (%.0lf)
        printf("\n%.0lf! = %.0lf\n", nombre, itera_fact(nombre));
        printf("\n");

        break;

    case 2:

        printf("\n-------------Methode recursive----------------\n");
        printf("\nEntrer le nombre n pour calculer son factoriel : ");
        scanf("%lf", &nombre);
        printf("\n%.0lf! = %.0lf\n", nombre, recur_fact(nombre));
        printf("\n");

        break;

    default:
        printf("\nDommage !! Vous n'avez fait aucun choix\n\n");
        break;
    }
    // On return 0 s'il n'ya aucun erreur.
    return 0;
}
