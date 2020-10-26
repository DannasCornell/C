#include <stdio.h>
#define PI 3.14159
int main()
{
int r;
float l, a;
printf("Introduce radio (entero): ");
scanf("%d", &r);
l= (2*PI*r); 
a= (PI*r*r);
printf("La longitud de la circunferencia vale %0.2f\n", l);
printf("El área del círculo vale %0.2f\n", a);
}
