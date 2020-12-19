#include <stdio.h>
const float g = 9.81;
float m;
float P;
int main()
{
    printf ("Indique su masa corporal en Kg\n");
	scanf ("%f", &m);
	P= g*m;
	printf("La fuerza de atraccion de su peso es %f", P);

	return 0;
}