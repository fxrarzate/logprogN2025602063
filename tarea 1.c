#include <stdio.h>

int main()
{
    int x,y;
    x=2;
    y=4;
    float z= (float)1/x+(float)((x+y)/2)+(float)(2*(x/y));
    printf("el valor de z es: %f",z);
    return 0;
}
