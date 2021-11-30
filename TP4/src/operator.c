/*
Exercice 4.1 [★]

Fichier : operator.c
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Implementer les foncions somme, produit....
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operator.h"

int sommme(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a - b;
}

int produit(int a, int b)
{
    return a * b;
}

int quotient(int a, int b)
{
    return a / b;
}

int modulo(int a, int b)
{
    return a % b;
}

int et(int a, int b)
{
    return a & b;
}

int ou(int a, int b)
{
    return a | b;
}

unsigned char negation(unsigned char a)
{
    return (~a);
}
