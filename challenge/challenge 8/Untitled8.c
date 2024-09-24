#include <stdio.h>
int main() {
float number1;
float number2;
float number3;
float Moyenne_geometrique;
float A;
float B;
printf("the number1:");
scanf("%f",&number1);
printf("the number2:");
scanf("%f",&number2);
printf("the number3:");
scanf("%d",&number3);
A=(number1*number2*number3);
B=(1/3);
Moyenne_geometrique=pow(A,B);
printf("the geometric mean of three numbers entered is:%f",Moyenne_geometrique);
return 0;
}

