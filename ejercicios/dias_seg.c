 # include <stdio.h>

int main(){
	//Declaracion de variables 
	int dias;
	float resultado;
	
	//Instrucciones para el suario 
	printf("Ingresar un n�mero de d�as para calcular los segundos que tiene:");
	//Leemos la variable dias
	scanf("%d", &dias);
	resultado = dias * (24*60*60);
	printf("\tEn %d d�as hay %0.2f segundos.\n", dias, resultado);
	
	return 0; 
}
