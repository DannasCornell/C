#include<stdlib.h>
#include<math.h>
#include <stdio.h>

float a, b, c; // Declarando variable
int a1, b1,c1;
int main()
   {
	
     printf("\Dame el \'primer\' numero: ");
     scanf("%f",&a);
     
     printf("\nDame el \'segundo\' numero: ");
     scanf("%f",&b);
      	
     printf("Suma\n");
	 c=a + b; // Suma o adicion
	 printf("\t %0.2f + %0.2f= %0.2f\n" ,a , b, c);
	 
	 printf("Resta\n");
	 c=a - b; 
	 printf("\t %0.2f - %0.2f= %0.2f\n" ,a , b, c);
     	 
	 printf("Multiplicacion\n");
	 c=a * b; 
	 printf("\t %0.2f * %0.2f= %0.2f\n" ,a , b, c);
 	
 	printf("Division\n");
	 c=a / b; 
	 printf("\t %0.2f / %0.2f= %0.2f\n" ,a , b, c);
	 
	 printf("Modulo\n");
	 a1 = a;
	 b1 = b;
	 c1= a1 % b1; 
	 printf("\t %El modulo de  %d / %d= %d\n" ,a1 , b1, c1);
	 
	 printf("Raiz Cuadrada de A");
	 c= sqrt(a); 
	 printf( "\tLa Raiz Cuadrada de %f es: %f" , a, c);
	 c=sqrt (b);
	 printf( "\tLa Raiz Cuadrada de %f es: %f" , b, c);
	 
	 printf("\nPotencia\n");
	 c=pow (a , b); 
	 printf("\t %0.2f elevado a la potencia / %0.2f= %0.2f\n" ,a , b, c);
	 c=pow (a , a); 
	 printf("\t %0.2f elevado a la potencia / %0.2f= %0.2f\n" ,a , b, c);
	 
	 
    
	return 0; 
	}
		


