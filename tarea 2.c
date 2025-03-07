#include <stdio.h>
#include <math.h>
 int main ()
 {
     int L;
     L=7;
     float c1= pow(L,2);
     float c2= (L*1.0/5.0)*(L*3.0/5.0);
     float c3= (L*1.0/5.0)*(L*1.0/5.0);

     float at= c1+(2*c2)+(2*c3)+(3.1416*((L/2.0)*(L/2.0))/2);
     float pt= (L*23.0/5.0)+((3.1416*L)/2);

     printf("el area total es:%f\n",at );
     printf("el perimetro total es:%f",pt );
     return 0;

 }
