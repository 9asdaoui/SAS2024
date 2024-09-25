#include <stdio.h>

int main(){
int A;
int B;
int C;
int D;
int F;
int H;
int G;
printf("enter four-digit number:");
scanf("%d",&A);
B=A%10;
C=A/10;
D=C%10;
F=C/10;
G=F%10;
H=F/10;



printf("%d",B);
printf("%d",D);
printf("%d",G);
printf("%d",H);

    return 0;
}
