#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double R=0;
    double volumEsfera =0;
    const double pi = 3.141593;


    printf("Introduzca el radio de la esfera, en metros\n: ");
    scanf("%lf", &R);


    volumEsfera = 4/3 * pi * pow(R, 3);
    printf("\n\tEl volumen de la esfera es %lf metros c%cbicos.\n\n", volumEsfera,163);
    return 0;
}