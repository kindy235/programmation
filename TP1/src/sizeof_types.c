/*
Exercice 1.3 [★]

Fichier : size_types.c
Auteur : Aboubacar BAH
Objectif : Ce programme affiche la taille en octets des differentes type de données.
*/
#include <stdio.h>

int main()
{
    printf("\n--------------------------------------");
    printf("\nTailles en octets des types de variables");
    printf("\n--------------------------------------\n");

    // signée
    printf("Taille en Octets Version Signee : \nChar : %ld \nShort : %ld \nInt : %ld \nLong int : %ld \nLong long int : %ld \nFloat : %ld \nDouble : %ld \nLong Double : %ld \n", sizeof(char), sizeof(short), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float), sizeof(double), sizeof(long double));

    // Non signéee
    printf("\nTaille en Octets Version NON Signee : \nChar : %ld \nShort : %ld \nInt : %ld \nLong int : %ld \nLong long int : %ld \n", sizeof(unsigned char), sizeof(unsigned short), sizeof(unsigned int), sizeof(unsigned long int), sizeof(unsigned long long int));

    return 0;
}