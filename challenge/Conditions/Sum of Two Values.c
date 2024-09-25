#include <stdio.h>
int main(){
    float num1;
    float num2;
    float result;
printf("enter number 1:");
scanf("%f",&num1);
printf("enter number 2:");
scanf("%f",&num2);
if (num1==num2)
    result=(num1+num2)*3;
if(num1!=num2)
    result=num1+num2;

printf("the result is :%f",result);


return 0;
}
