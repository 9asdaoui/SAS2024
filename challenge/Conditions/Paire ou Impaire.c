#include <stdio.h>
int main(){
int number;
int c;
printf("enter your number:");
scanf("%d",&number);
c=number%10;
if (number=0)
    printf("zero is even");
if (c==2||c==4||c==6||c==8||c==0)
    printf("the number is pair");
if (c==1||c==3||c==5||c==7||c==9)
    printf("the number is inpair");

return 0;
}
