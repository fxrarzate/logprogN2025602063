#include <stdio.h>
int main()
{
const float cover=500,descuento=0.25;
float total;
int numeromujeres,numerohombres;

printf("inserta el numero de hombres:");
scanf("%d",&numeromujeres);
//una entrada en un programa de consola debe ser antecedido por un prompt para que te imprima lo que quieres que el usuario ponga (mensaje al usuario)

printf("inserta el numero de mujeres:");
scanf("%d",&numerohombres);

total = (numerohombres*cover)+(numeromujeres*cover)-(numeromujeres*cover*descuento);
printf("total: %f",total);
return 0;

}
