#include <stdio.h>

int main()
{	
float Lado, Perimetro; //Declaraci�n de variables

	//Instrucciones para el usuario
	printf("Ingrese la medida de uno de los lados:"); //Leemos la variable Lado
	scanf("%f", &Lado);
	
	Perimetro = (Lado*3);	//Realizar Operaci�n
	printf("\nEl Perimetro del triangulo es: %0.2f", Perimetro);
	
return 0;
}
