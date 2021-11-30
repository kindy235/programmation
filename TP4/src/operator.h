/*
Exercice 4.1 [★]

Fichier : operator.h
Auteurs : Aboubacar BAH, Guth MOELLE
Objectif : Prototypes des fonctions somme, produit...
*/

// les prototypes des fonctions sur les operateurs

//Pour eviter les inclusions infinies, j'ai utilisé la condition ifndef, qui permet d'inclure une seule fois le fichier .h
#ifndef OPERATOR_H
#define OPERATOR_H

int sommme(int a, int b);

int difference(int a, int b);

int produit(int a, int b);

int quotient(int a, int b);

int modulo(int a, int b);

int et(int a, int b);

int ou(int a, int b);

unsigned char negation(unsigned char a);

#endif