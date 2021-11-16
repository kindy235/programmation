/*
Exercice 2.9 [★★★]

Fichier : tableauptr.c
Auteur : Aboubacar BAH
Objectif : Modifier les contenu des tableaux à l'aide des pointeurs.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printint_array(int array[], int array_size)
{
    for (int k = 0; k < array_size; k++)
    {
        printf("%4d", *(array + k));
    }
}

void printfloat_array(float array[], int array_size)
{
    for (int k = 0; k < array_size; k++)
    {
        printf("%4.0f", *(array + k));
    }
}

int main()
{
    // Generateur de nombres pseudo-aleatoires
    srand(time(NULL));
    printf("\n---------------------------------------");
    printf("\nManipulation de tableau via les pointeurs");
    printf("\n---------------------------------------");

    // Declaration de deux tableaux de types int et float

    int tableau1[20];
    float tableau2[20];

    for (int i = 0; i < 20; i++)
    {
        *(tableau1 + i) = rand() % 100;
        *(tableau2 + i) = rand() % 100;
    }

    printf("\n\nTableau de int avant : \n\tTableau1 =>");
    printint_array(tableau1, 20);

    printf("\n\nTableau de float avant : \n\tTableau2 =>");
    printfloat_array(tableau2, 20);

    for (int j = 0; j < 20; j++)
    {
        if (j % 2 == 0)
        {
            // Tableau int
            *(tableau1 + j) = *(tableau1 + j) * 3;
            // Tableau float
            *(tableau2 + j) = *(tableau2 + j) * 3;
        }
    }

    printf("\n\n---------------------------------------\n");
    printf("Tableaux apres mutiplication (tab+i)=(tab+i)*3 pour i%%2=0");
    printf("\n---------------------------------------");

    printf("\n\nTableau de int apres : \n\tTableau1 =>");
    printint_array(tableau1, 20);

    printf("\n\nTableau de float apres : \n\tTableau2 =>");
    printfloat_array(tableau2, 20);

    printf("\n\n");

    return 0;
}