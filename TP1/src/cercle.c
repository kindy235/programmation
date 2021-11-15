/*
Exercice 1.1 [★★]

Fichier : circle.c
Auteur : Aboubacar BAH
Objectif : Affiche l'aire et le perimètre d'un cercle.
*/

#include <stdio.h>

int main()
{
    double pi = 3.14159265359;
    double rayon = 0;
    printf("\n--------------------------------------");
    printf("\nCalcul les dimensions d'un circle");
    printf("\n--------------------------------------");

    // Avce scanf, on donne le choix à l'utilisateur, de donner la valeur du rayon
    printf("\nValeur du rayon = ");
    scanf("%lf", &rayon);

    // Le perimètre d'un circle se calcule avec la formule P=2pi*R
    printf("\nPerimetre = 2*pi*rayon = %0.2lf\n", 2 * pi * rayon);

    // la formule de l'aire est S=pi*R*R, le %0.2lf affiche juste 2 décimal après la virgule.
    printf("\nAire = pi*rayon^2 = %0.2lf\n\n", pi * rayon * rayon);

    return 0;
}