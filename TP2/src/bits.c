/*
Exercice 2.2 [★]

Fichier : bits.c
Auteur : Aboubacar BAH
Objectif : vérifie si les 4eme et 20eme bits de gauche sont 1 (en binaire).
Si les deux bits sont 1, il affiche 1 sinon 0.
*/

#include <stdio.h>

int main()
{
    // On initialise un entier non signé et un tableau de 32 cases
    // representant les 32 bits d'un entier
    unsigned int d = 0;
    int tableau[32];
    printf("\n--------------------------------------");
    printf("\nVerifie les 4eme et 20emes bites d'un nombre en partant de gauche : d");
    printf("\n--------------------------------------");

    // Avce scanf, on donne le choix à l'utilisateur, de donner la valeur de d
    printf("\nEntier d => ");
    scanf("%d", &d);

    // Avec une boucle for on rempplie les 32 positions de ce tableau
    for (int i = 31; i >= 0; i--)
    {
        // Le tableau contient le reste de diviosn de d par 2
        tableau[i] = d % 2;
        d = d / 2;
    }

    printf("\nEquivalent binaire => ");

    for (int j = 0; j < 32; j++)
    {
        printf("%d", tableau[j]);
    }

    if (tableau[3] == 1 && tableau[19] == 1)
    {
        printf("\n\n4eme Bit => %d", tableau[3]);
        printf("\n20eme Bit => %d", tableau[19]);
        printf("\nCode de retour => %d\n", 1);
    }
    else
    {
        printf("\n\n4eme Bit => %d", tableau[3]);
        printf("\n20eme Bit => %d", tableau[19]);
        printf("\nCode de retour => %d\n", 0);
    }

    return 0;
}