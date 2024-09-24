#include <stdio.h>
#include <math.h>
int main() {
float number1;
float number2;
float number3;
float result1;
float result2;
float result3;
printf("enter number1:");
scanf("%f",&number1);
printf("enter number2:");
scanf("%f",&number2);
printf("enter number3:");
scanf("%f",&number3);
result1=pow(number1,2);
result2=pow(number1,3);
result3=pow(number1,5);
printf("result for 1st number weighting 2 is %0.2f\n",result1);
printf("result for 2st number weighting 3 is %0.2f\n",result2);
printf("result for 3st number weighting 5 is %0.2f\n",result3);


   return 0;
}
