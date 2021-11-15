/*
Exercice 2.4 [★★]

Fichier : chaine.c
Auteur : Aboubacar BAH
Objectif : Manipuler des chaines de caractères
    1. calculer le nombre de caractères dans une chaine de caractères;
    2. copier une chaine de caractères dans une autre;
    3. concatèner deux chaines de caractères
*/

#include <stdio.h>

// Fonction pour calculer la taille d'une chaine de caracteres
int taille(char *chaine)
{
    int i = 0;
    while (1)
    {
        if (chaine[i] == '\0')
        {
            i++;
            break;
        }
        i++;
    }
    return i;
}

// Fonction de copie
void copie(char *destination, char *source)
{
    for (int i = 0; i < taille(source) - 1; i++)
        destination[i] = source[i];
}

// Fusion de deux chaines
void concat(char *dest, char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    for (; i < (taille(str1) + taille(str1) - 2); i++)
    {
        if (i < taille(str1) - 1)
            dest[i] = str1[i];
        else
        {
            dest[i] = str2[j];
            j++;
        }
    }
    dest[i] = '\0';
}

int main()
{
    char chaine1[100];
    char chaine2[100];
    char chaine[200];
    printf("\n--------------------------------------------");
    printf("\n** Manipulations de chaines de caracteres **");
    printf("\n--------------------------------------------");

    // Avce scanf, on donne le choix à l'utilisateur, de donner la valeur de la limite
    printf("\nChaine 1 = ");
    gets(chaine1);

    printf("\nChaine 2 = ");
    gets(chaine2);

    printf("\nChaine 1 => %s", chaine1);
    printf("\nChaine 2 => %s\n", chaine2);

    printf("\nTaille Chaine 1 => %d\n", taille(chaine1));
    printf("\nTaille Chaine 2 => %d\n", taille(chaine2));

    printf("\n--------------------------------------");
    printf("\nConcatenation de Chaine1 et Chaine2\n");

    concat(chaine, chaine1, chaine2);
    printf("\nChaineS => %s", chaine);
    printf("\nTaille Chaine S => %d\n", taille(chaine));

    printf("\n--------------------------------------");
    printf("\nCopie de Chaine1 dans Chaine2\n");

    copie(chaine2, chaine1);

    printf("\nChaine 1 => %s", chaine1);
    printf("\nChaine 1 copie -> Chaine2 => %s\n", chaine2);

    return 0;
}