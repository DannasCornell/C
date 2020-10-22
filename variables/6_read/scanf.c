#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
int r;

float l, a, p;
printf("Introduce radio (entero): ");
scanf("%d", &r);

l=2*PI*r; 
a=PI*r*r;

printf("La longitud de la circunferencia vale %0.2f\n", l);
printf("El Area del circulo vale %0.2f\n", a);

p= pow(PI, r);
printf("\t%0.2f elevado a la potencia \t%0.2i vale = %0.2f\n", PI, r, p);
printf("\t%0.2i elevado a la potencia \t%0.2f vale = %0.2f\n", r, PI, p); 
return 0;
}

