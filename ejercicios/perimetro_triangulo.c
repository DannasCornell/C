#include <stdio.h>
int main ()

{
	float p;// se declaran las variables 
	float a;
	float b;
	float c;
	printf("Introduzca el primer lado del triangulo: ");// se pide el usuario ingresar los datos 
	scanf ("%f", &a);// se reciben los datos 
	printf("Introduzca el segundo lado del triangulo: ");
	scanf ("%f", &b);
	printf("Introduzca el tercer lado del triangulo: ");
	scanf ("%f", &c);
	p =a+b+c; // se hace la operación correspondente 
	printf("El perimetro del triangulo es: %.3f", p);// se imprime el resultado 
	
}
