
#include <stdio.h>
int main() {
printf("enter number A:");
double num1;
double num2;
scanf("%lf",&num1);
printf("enter number B:");
scanf("%lf",&num2);
double a;
double b;
double c;
double d;
a=num1+num2;
b=num1-num2;
c=num1*num2;
d=num1/num2;
printf("A+B= %lf",a);
printf("A-B= %lf",b);
printf("A*B= %lf",c);
if (num2==0)
    printf("A/B cannot be done becuse B=0");
    else printf("A/B= %lf",d);

return 0;
}

