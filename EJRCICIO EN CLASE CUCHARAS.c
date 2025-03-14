#include<stdio.h>


int main()

{


    float ISR=0.10;
    float paquetescucharas=12;


int paquetesentregados;
    printf("numero de paquetes elaborados:");
    scanf("%d",&paquetesentregados);


    float salariobruto=paquetesentregados*.5;
    float salarioneto=salariobruto-(salariobruto*ISR);
    float cucharaselaboradas=paquetesentregados*12;

     printf("Salario Bruto: %f, \n", salariobruto);
     printf("Salario Neto: %f, \n", salarioneto);
    printf("cucharas elaboradas: %f , \n", cucharaselaboradas);


 return 0;
 }

