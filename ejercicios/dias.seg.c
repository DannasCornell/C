#include <stdio.h>

int main()
{
	//Declaracion de variables 
	int dias;
	float resultado;
	//instrucciones para el usuario 
	printf( "Ingrese un numero de dias para calcular los segundos que tiene ");
	//Leemos la variable días 
	scanf ("%d", &dias);
	resultado = dias *(24*60*60);
	printf ("\tEn %d dias hay %f segundos.\n", dias, resultado );
	return 0; 

}
