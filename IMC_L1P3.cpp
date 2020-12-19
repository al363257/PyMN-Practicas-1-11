#include <stdio.h>
#include <math.h>
char nombre[10];
int edad;
float peso, IMC;
float estatura;

int main()
{
	printf("Nombre\n");
	scanf("%s", &nombre);
	printf("Edad\n");
	scanf("%d", &edad);
	printf("Peso en Kg\n");
	scanf("%f", &peso);
	printf("Estatura en M\n");
	scanf("%f", &estatura);
	IMC= peso/(pow(estatura, 2));
	printf("%s con edad de %d y peso de %f tu IMC es %f", nombre, edad, peso, IMC);
	
	
	return 0;
}

