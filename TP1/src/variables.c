/*
Exercice 1.4 [★★]

Fichier : variables.c
Auteur : Aboubacar BAH
Objectif : Programme qui affecte et affiche les valeurs des variables des différents types de base
*/

#include <stdio.h>

int main()
{

    printf("\n--------------------------------------");
    printf("\nAffectation et affichage et differents types de variables");
    printf("\n--------------------------------------");
    signed char Monchar = 65;
    signed short Monshort = 30000;
    signed int Monint = 15000;
    long int Monlongint = 30000;
    signed long long int Monlonglongint = 60000;
    float Monfloat = 12345.123456;
    double Mondouble = 22345.123456;
    long double Monlongdouble = 32345.123456;

    printf("Valeurs en octets signes : \nChar : %lc \nShort : %hd \nInt : %d \nLong int : %ld \nLong long int : %lld \nFloat : %f \nDouble : %lf \nLong Double : %Lf \n", Monchar, Monshort, Monint, Monlongint, Monlonglongint, Monfloat, Mondouble, Monlongdouble);

    unsigned char uMonchar = 65;
    unsigned short uMonshort = 65000;
    unsigned int uMonint = 4000000;
    unsigned long int uMonlongint = 8000000;
    unsigned long long int uMonlonglongint = 9000000;

    printf("\nValeurs en octets Non signes : \nChar : %c \nShort : %hu \nInt : %u \nLong int : %lu \nLong long int : %llu \n", uMonchar, uMonshort, uMonint, uMonlongint, uMonlonglongint);

    return 0;
}