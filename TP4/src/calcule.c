/*
Exercice 4.3 [★★]

Fichier : calcule.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Calculer à l'aide des opérateurs du fichier operator.c et des arguments passés en ligne de commande

Compiliation: gcc -o .\calcule .\calcule.c .\operator.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char **argv)
{
    printf("\n--------------------------------------");
    printf("\nCalcul avec plusieurs operateurs\n");
    printf("\nOperateurs possibles : [+, -, *, /, %%, &, |, ~]\n");
    printf("\n--------------------------------------\n");

    char op = *argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    // On crée un tableau de chaine de caractères op[] de taille 2.
    // La première position est ocuppé par la valeur de l'operateur et la deuxième
    // par le caractère de fin de chaine (0)

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

    return 0;
}