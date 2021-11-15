/*
Exercice 2.3 [★]

Fichier : fibonacci.c
Auteur : Aboubacar BAH
Objectif : Calculer la suite des n premiers termes de la suite de Fibonacci
*/

#include <stdio.h>

int main()
{
    unsigned long long int Un = 0, U0 = 1, U1 = 1;
    unsigned int t = 0;
    printf("\n--------------------------------------");
    printf("\nSuite de Fibonacci : U[n] = U[n-1] + U[n-2]");
    printf("\n--------------------------------------");

    // Avce scanf, on donne le choix à l'utilisateur, de donner la valeur de la limite
    printf("\nNombres de termes n = ");
    scanf("%d", &t);

    for (int i = 0; i <= t; i++)
    {
        if (i < 2)
        {
            printf("U[%d] => %lld\n", i, U0);
        }
        else
        {
            // Calucle du terme suivant U[n] = Un[n-1] + Un[n-2]
            Un = U1 + U0;
            printf("U[%d] => %lld\n", i, Un);

            // Sauvegrade du precedent terme Un[n-2] pour le prochain calcul.
            U0 = U1;
            // Sauvegrade du precedent terme Un[n-1] pour le prochain calcul
            U1 = Un;
        }
    }

    return 0;
}