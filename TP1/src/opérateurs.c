/*
Exercice 1.5 [★★]

Fichier : opérateurs.c
Auteur : Aboubacar BAH
Objectif : Effectuer des operations en se servant des operateurs arithmetiques et logiques
*/

#include <stdio.h>

int main()
{

    printf("\n--------------------------------------");
    printf("\nOperations arithmetiques et logiques");
    printf("\n--------------------------------------");
    int a = 16;
    int b = 3;

    printf("\na = %d\n", a);
    printf("b = %d\n\n", b);

    //+
    printf("Addition: a+b => %d\n\n", a + b);

    //-
    printf("Soustraction: a-b => %d\n\n", a - b);

    //*
    printf("Multiplication: a*b => %d\n\n", a * b);

    // a/b
    printf("Division: a/b => %d\n\n", a / b);

    //%
    printf("Modulo: a%%b => %d\n\n", a % b);

    //ET logique
    printf("ET Logique: a&&b => %d\n\n", a && b);

    //OU logique
    printf("OU Logique: a||b => %d\n\n", a || b);

    //NON ET logique
    printf("NON ET logique : !(a&&b) => %d\n\n", !(a && b));

    //NON OU logique
    printf("NON OU logique: !(a||b) => %d\n\n", !(a || b));

    //ET arithmetique
    printf("ET arithmetique: a&b => %d\n\n", a & b);

    //OU arithmetique
    printf("OU arithmetique: a|b => %d\n\n", a | b);

    //XOR arithmetique
    printf("XOR arithmetique: a^b => %d\n\n", a ^ b);

    //Différent
    printf("Difference: a!=b => %d\n\n", a != b);

    //Complément 1
    printf("Complement 1: ~a => %d\n\n", ~a);

    //Décalage de bit gauche a * 2^b(puissance)
    printf("Decalage de bit gauche a * 2^b(puissance): a<<b => %d\n\n", a << b);

    //Décalage de bit droite a / 2^b(puissance)
    printf("Decalage de bit droite a / 2^b(puissance): a>>b => %d\n\n", a >> b);

    return 0;
}