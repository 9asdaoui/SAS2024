#include <stdio.h>
#include <math.h>
int main (){
    float a;
    float b;
    float c;
    float delta;
    float result1;
    float result2;
 printf("enter the equation:\na:");
 scanf("%f",&a);
 printf("b:");
 scanf("%f",&b);
 printf("c:");
 scanf("%f",&c);
 delta=pow(b,2)-4*a*c;
 if (delta=0)
    printf("the result is %f",result1=-b/2*a);
 if (delta<0)
    printf("the result is %f",result1=-b+sqrt(delta)/2*a);
    printf("the result is %f",result2=-b-sqrt(delta)/2*a);
 if (delta>0)
    printf("no solution");

return 0;
}
