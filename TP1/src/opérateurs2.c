/* Exercice 1.8 [★★]

Fichier : opérateurs2.c
Auteur : Aboubacar BAH
Objectif: Écrire un programme opérateurs2.c qui utilise trois variables:
    num1 (entier);
    num2 (entier);
    op (un caractère);
Pour faire une opération de calcul entre variables via l'opérateur.
*/

#include <stdio.h>

int main()
{

    printf("\n--------------------------------------");
    printf("\nCalcul avec plusieurs operateurs\n");
    printf("\nOperateurs possibles : [+, -, *, /, %%, &, |, ~]\n");
    printf("\n--------------------------------------\n");

    int num1 = 0, num2 = 0;
    // On crée un tableau de chaine de caractères op[] de taille 2.
    // La première position est ocuppé par la valeur de l'operateur et la deuxième
    // par le caractère de fin de chaine (0)
    char op[2];

    printf("num1 : ");
    scanf("%d", &num1);

    printf("num2 : ");
    scanf("%d", &num2);

    printf("Operateur : ");
    scanf("%s", &op[0]);

    // Ensuite on utilise switch pour effectuer differentes conditions sur l'operatuer saisi au clavier
    // afin d'effectuer le calcul.
    switch (op[0])
    {
    case '+':
        printf("Addition: %d + %d = %d\n\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("Soustraction: %d * %d = %d\n\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("Multiplication: %d - %d = %d\n\n", num1, num2, num1 * num2);
        break;

    case '/':
        printf("Division: %d / %d = %d\n\n", num1, num2, num1 / num2);
        break;

    case '%':
        printf("Modulo: %d %% %d = %d\n\n", num1, num2, num1 % num2);
        break;

    case '&':
        printf("ET: %d & %d = %d\n\n", num1, num2, num1 & num2);
        break;

    case '|':
        printf("OU Inclusif: %d | %d = %d\n\n", num1, num2, num1 | num2);
        break;

    case '~':
        printf("Complement bit a bit de la somme: ~(%d+%d) = %d\n\n", num1, num2, ~(num1 + num2));
        break;

    default:
        break;
    }

    return 0;
}
