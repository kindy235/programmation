// /*
// Exercice 1.9 [★★★]

// Écrivez un programme binaire.c qui utilise for pour l'affichage
// d'une variable int en format binaire. Rappelez-vous bien que printf n'a pas de code de conversion comme x (l'affichage d'un numéro
// en notation hexadécimale) ou o (l'affichage d'un numéro en notation octale) p
// our l'affichage en notation binaire. Testez votre code avec les 5 numéros suivants : 0, 4096, 65536, 65535, 1024
// */

#include <stdio.h>

int main()
{

    // pour l'affichage de numéros <= 1000 qui sont divisible par:

    unsigned int dividende;
    printf("\n--------------------------------------\n");
    printf("Affichage binaire des nombres\n");
    printf("--------------------------------------\n");

    printf("Saisir un entier : ");
    scanf("%d", &dividende);

    int position = 0;
    int tableau[32];

    if (dividende == 0)
    {
        printf("\nnbits = %d\n\n", position + 1);
        printf("Equivalent binaire = %d", dividende);
    }
    else
    {
        // Pour conventir un entier en binaire, on divise successivement ce nombre par 2
        // et on garde le reste pour l'ecriture du nombre en binaire.
        for (; dividende >= 1; dividende = dividende / 2)
        {
            tableau[position] = dividende % 2;
            if (dividende != 1)
                position++;
        }

        printf("\nnbits = %d\n\n", position + 1);

        printf("Equivalent binaire = ");

        for (int i = position; i >= 0; i--)
        {
            printf("%d", tableau[i]);
        }
    }

    printf("\n\n");

    return 0;
}