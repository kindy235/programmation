/*
Affiche l'aire et le perimètre d'un cercle
*/
#include <stdio.h>
// #include <math.h>

int main () {
    double pi=3.14;
    double rayon = 0;
   
    printf("\nPerimetre = 2*pi*rayon = %0.2lf\n", 2*pi*rayon);
    printf("\nAire = pi*rayon^2 = %0.2lf\n\n", pi*rayon*rayon);

    return 0;
}