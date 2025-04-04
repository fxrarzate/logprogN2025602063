#include <stdio.h>

 int main()
 {
     float PESO,ALTURA,IMC;

     printf("¿cual es tu peso en KG?");
     scanf("%f",&PESO);

     printf("¿cual es tu altura en metros?");
     scanf("%f",&ALTURA);

     IMC= PESO/(ALTURA*ALTURA);

     if(IMC<=18.4)
     {
         printf("bajo peso");
     }

     else if (IMC>=18.5 && IMC<=24.9)
     {
         printf("peso normal");
     }

     else if (IMC>=25.0 && IMC<=29.9)
     {
         printf("sobre peso");
     }

     else if (IMC>=30.0 && IMC<=34.9)
     {
         printf("obesidad clase 1");
     }

     else if (IMC>=35.0 && IMC<=39.9)
     {
         printf("obesidad clase 2");
     }

     else if (IMC>=40.0)
     {
         printf("obesidad clase 3");
     }

     return 0;
 }
