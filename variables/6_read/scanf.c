#include <stdio.h>
#define PI 3.14159
int main()
{
int r;
float l, a,c;
printf("Introduce radio (entero): ");
scanf("%d", &r);
l=2*PI*r; 
a=PI*r*r;
printf("La longitud de la circunferencia vale % 0.2f\n", l);
printf("El Area del circulo vale % 0.2f\n", a);

printf ("\nPotencia\n") ;
c=pow (a , r); 
printf("\t %0.2f elevado a la potencia / %d = %0.2f\n" ,a , r, c);


}
