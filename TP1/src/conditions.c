/*
Exercice 1.7 [★★]

Fichier : conditions.c
Auteur : Aboubacar BAH
Objectif : Afficher les nombres <=limite qui peut etre égale à 1000 divisible pqr M

a. 2 et 15

b. 103 ou 107

c. 7 ou 5, mais pas par 3
*/
#include <stdio.h>

int main()
{

    // pour l'affichage des nombres <= count qui sont divisible par:
    // La valeur limite (count) est donnée par l"utilisateur via le clqvier
    int count;
    printf("Limite des valeurs a tester: ");
    scanf("%d", &count);

    int i = 0;
    while (1)
    {
        // a. si i est divisible 2 et 15
        if (i % 2 == 0 && i % 15 == 0)
        {
            printf("Divisible par 2 et 15 : %d\n", i);
        }
        // b. si i est divisible 103 ou 107
        if (i % 103 == 0 || i % 107 == 0)
        {
            printf("Divisible par 103 ou 107 : %d\n", i);
        }

        // c. si i est divisible 7 ou 5, mais pas par 3
        if ((i % 7 == 0 || i % 5 == 0) && i % 3 != 0)
        {
            printf("Divisible par 7 ou 5 mais pas par 3 : %d\n", i);
        }
        // Si i atteient la limite fixé par l'utilisateur on arréte la boucle
        if (i == count)
        {
            break;
        }
        i++;
    }

    return 0;
}