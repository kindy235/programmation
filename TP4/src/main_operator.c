/*
Exercice 4.1 [★]

Fichier : operators.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Effectue des operations de calculs via les fichiers "operator.c" et "operator.h"

Compilation gcc -o operator operator.c main_operator.c
*/

#include <stdio.h>
// Fichier en-tete contenant les prototypes des focntions (somme, produit, modulo...)
#include "operator.h"

int main()
{

    printf("\n--------------------------------------");
    printf("\nCalcul avec plusieurs operateurs\n");
    printf("\nOperateurs possibles : [+, -, *, /, %%, &, |, ~]\n");
    printf("\n--------------------------------------\n");

    int num1 = 0, num2 = 0;
    unsigned char num = 0;
    char op[2];

    printf("Operateur : ");
    scanf("%s", &op[0]);

    // On verifie si l'operateur est ~, si c'est le cas,
    // on demande à l'utilisateur d'entrer unne seule valeur; dans le cas contraire; on saisit deux valeurs
    if (op[0] == '~')
    {
        printf("num : ");
        scanf("%d", &num);
    }
    else
    {
        printf("num1 : ");
        scanf("%d", &num1);

        printf("num2 : ");
        scanf("%d", &num2);
    }

    // Ensuite on utilise switch pour effectuer differentes conditions sur l'operateur saisi au clavier
    // afin d'effectuer le calcul.
    switch (op[0])
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
        printf("\nNegation ou Complement a 2: (~%d) = %d\n\n", num, negation(num));
        break;

    default:
        printf("\nOperateur non disponible");
        break;
    }

    return 0;
}