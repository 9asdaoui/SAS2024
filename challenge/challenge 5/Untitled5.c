#include <stdio.h>
int main() {
printf("enter the temperature in celsius:");
float T;
scanf("%f",&T);
if (T<0)
    printf("the state of water at this temperature is Solid ");
if (0<=T && T<100)
    printf("the state of water at this temperature is Liquide");
if (T>= 100)
    printf("the state of water at this temperature is Gas");



return 0;
}
