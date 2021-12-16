/*
Exercice 4.4 [★★]

Fichier : calcule.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Calculer à l'aide des opérateurs du fichier operator.c et des arguments passés en ligne de commande

Compiliation: gcc -o .\calcule .\calcule.c .\operator.c
*/

// Il faut inclure les bibliothéques suivantes:
#include <stdio.h>
#include <stdlib.h>
// Il faut inclure le fichier 'operator.h' pour avoir les fonctions '(somme, produit, ...)
#include "operator.h"

// Programme principal, cette fois-ci, on ajoute en entrées du 'main' les variable argc (qui contient le nombre d'argument)
int main(int argc, char **argv)
{
    printf("\n--------------------------------------");
    printf("\nCalcul avec plusieurs operateurs\n");
    printf("\nOperateurs possibles : [+, -, *, /, %%, &, |, ~]\n");
    printf("\n--------------------------------------\n");

    char op = *argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    // On verifie si tous les arguments sont fournies, sinon on arrete le programme.
    if (argc != 4)
    {
        printf("Arguments manquants\n\n");
        printf("Utilisation: %s [Operateur] [nombre1] et/ou [nombre 2]\n\n", argv[0]);
        exit(-1);
    }

    // Ensuite on utilise switch pour effectuer differentes conditions sur l'operatuer saisi au clavier
    // afin d'effectuer le calcul.
    switch (op)
    {
    case '+':
        printf("\nSomme: %d + %d = %d\n\n", num1, num2, sommme(num1, num2));
        break;

    case '-':
        printf("\nDifference: %d - %d = %d\n\n", num1, num2, difference(num1, num2));
        break;

    case '*':
        printf("\nProduit: %d * %d = %d\n\n", num1, num2, produit(num1, num2));
        break;

    case '/':
        printf("\nQuotient: %d / %d = %d\n\n", num1, num2, quotient(num1, num2));
        break;

    case '%':
        printf("\nModulo: %d %% %d = %d\n\n", num1, num2, modulo(num1, num2));
        break;

    case '&':
        printf("\nET: %d & %d = %d\n\n", num1, num2, et(num1, num2));
        break;

    case '|':
        printf("\nOU Inclusif: %d | %d = %d\n\n", num1, num2, ou(num1, num2));
        break;

    case '~':
        printf("\nNegation ou Complement a 2: (~%d) = %d\n\n", num1, negation(num1));
        break;

    default:
        printf("\nOperateur non disponible");
        break;
    }

    // On return 0 s'il n'ya aucun erreur.
    return 0;
}