/*
Exercice 2.1 [★]

Fichier : puissance.c
Auteur : Aboubacar BAH
Objectif : Calculer la valeur du nombre a élevé à la puissance b
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    printf("\n--------------------------------------");
    printf("\nCalcul de puissances : a^b");
    printf("\n--------------------------------------");

    // Avce scanf, on donne le choix à l'utilisateur, de donner les valeurs
    // Valeur de a
    printf("\nEntier : a = ");
    scanf("%d", &a);

    // valeur de la puissance : b
    printf("\nPuissance : b = ");
    scanf("%d", &b);

    // Le resultat pouvant etre un grand nombre, j'ai fait le choix d'un double pour etre plus précis
    double resultat = 1;

    // Si la puissance est positive, on fait la multiplication succesive de a par a i*fois
    if (b >= 0)
    {
        for (int i = b; i > 0; i--)
        {
            resultat = resultat * a;
        }
        printf("\nResultat : %d^%d = %.0lf\n\n", a, b, resultat);
    }
    // Si elle cette puissance est négative, alors on fait la division successive de a par a i*fois
    else
    {
        for (int i = b; i < 0; i++)
        {
            resultat = resultat / a;
        }
        // On affiche 15 decimal apres la virgule.
        printf("\nResultat : %d^%d = %.15lf\n\n", a, b, resultat);
    }

    return 0;
}