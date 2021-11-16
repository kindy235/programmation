/*
Exercice 2.8 [★★]

Fichier : ptrvariables.c
Auteur : Aboubacar BAH
Objectif : Manipulation des variables via les pointeurs
*/

#include <stdio.h>

int main()
{
    printf("\n---------------------------------------");
    printf("\nManipulation des variables via les pointeurs");
    printf("\n---------------------------------------");

    char Monchar = 65;
    short Monshort = 30000;
    int Monint = 15000;
    long int Monlongint = 30000;
    long long int Monlonglongint = 60000;
    float Monfloat = 12345.123456;
    double Mondouble = 22345.123456;
    long double Monlongdouble = 32345.123456;

    // printf("\nValeurs des variables : \nChar : %lc \nShort : %hd \nInt : %d \nLong int : %ld \nLong long int : %lld \nFloat : %f \nDouble : %lf \nLong Double : %Lf \n", Monchar, Monshort, Monint, Monlongint, Monlonglongint, Monfloat, Mondouble, Monlongdouble);
    //Type Char
    printf("\nAdresse de Monchar :=> %p\n", &Monchar);
    printf("Contenu de Monchar :=> %c\n", Monchar);

    signed char *ptrMonchar = &Monchar;
    *ptrMonchar = 66;

    printf("Adresse pointee par *ptrMonchar :=> %p\n", ptrMonchar);
    printf("Contenu de l'adresse pointee par *ptrMonchar:=> %c\n", *ptrMonchar);
    printf("Contenu de Monchar apres modification:=> %c\n", Monchar);

    //Type Short
    printf("\nAdresse de Monshort :=> %p\n", &Monshort);
    printf("Contenu de Monshort :=> %hi\n", Monshort);

    short *ptrMonshort = &Monshort;
    *ptrMonshort = 20000;

    printf("Adresse pointee par *ptrMonshort :=> %p\n", ptrMonshort);
    printf("Contenu de l'adresse pointee par *ptrMonchar:=> %hi\n", *ptrMonshort);
    printf("Contenu de Monshort apres modification:=> %hi\n", Monshort);

    //Type int
    printf("\nAdresse de Monint :=> %p\n", &Monint);
    printf("Contenu de Monint :=> %d\n", Monint);

    int *ptrMonint = &Monint;
    *ptrMonint = 300000;

    printf("Adresse pointee par *ptrMonint :=> %p\n", ptrMonint);
    printf("Contenu de l'adresse pointee par *ptrMonint:=> %d\n", *ptrMonint);
    printf("Contenu de Monint apres modification:=> %d\n", Monint);

    //Type long int
    printf("\nAdresse de Monlongint :=> %p\n", &Monlongint);
    printf("Contenu de Monlongint :=> %ld\n", Monlongint);

    long int *ptrMonlongint = &Monlongint;
    *ptrMonlongint = 500000;

    printf("Adresse pointee par *ptrMonlongint :=> %p\n", ptrMonlongint);
    printf("Contenu de l'adresse pointee par *ptrMonlongint:=> %ld\n", *ptrMonlongint);
    printf("Contenu de Monlongint apres modification:=> %ld\n", Monlongint);

    // Type long long int
    printf("\nAdresse de Monlonglongint :=> %p\n", &Monlonglongint);
    printf("Contenu de Monlonglongint :=> %lld\n", Monlonglongint);

    long long int *ptrMonlonglongint = &Monlonglongint;
    *ptrMonlonglongint = 1000000;

    printf("Adresse pointee par *ptrMonlonglongint :=> %p\n", ptrMonlonglongint);
    printf("Contenu de l'adresse pointee par *ptrMonlonglongint:=> %lld\n", *ptrMonlonglongint);
    printf("Contenu de Monlonglongint apres modification:=> %lld\n", Monlonglongint);

    //Type float
    printf("\nAdresse de Monfloat :=> %p\n", &Monfloat);
    printf("Contenu de Monfloat :=> %f\n", Monfloat);

    float *ptrMonfloat = &Monfloat;
    *ptrMonfloat = 185498.1820;
    printf("Adresse pointee par *ptrMonfloat :=> %p\n", ptrMonfloat);
    printf("Contenu de l'adresse pointee par *ptrMonfloat:=> %f\n", *ptrMonfloat);
    printf("Contenu de Monfloat apres modification:=> %f\n", Monfloat);

    // Type double
    printf("\nAdresse de Mondouble :=> %p\n", &Mondouble);
    printf("Contenu de Mondouble :=> %lf\n", Mondouble);

    double *ptrMondouble = &Mondouble;
    *ptrMondouble = 20547896.245879;

    printf("Adresse pointee par *ptrMondouble :=> %p\n", ptrMondouble);
    printf("Contenu de l'adresse pointee par *ptrMondouble:=> %lf\n", *ptrMondouble);
    printf("Contenu de Mondouble apres modification:=> %lf\n", Mondouble);

    // Type long double
    printf("\nAdresse de Monlongdouble :=> %p\n", &Monlongdouble);
    printf("Contenu de Monlongdouble :=> %Lf\n", Monlongdouble);

    long double *ptrMonlongdouble = &Monlongdouble;
    *ptrMonlongdouble = 15848695879.45885;

    printf("Adresse pointee par *ptrMonlongdouble :=> %p\n", ptrMonlongdouble);
    printf("Contenu de l'adresse pointee par *ptrMonlongdouble:=> %Lf\n", *ptrMonlongdouble);
    printf("Contenu de Monlongdouble apres modification:=> %Lf\n", Monlongdouble);

    return 0;
}