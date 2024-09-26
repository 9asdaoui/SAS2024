#include <stdio.h>
#include <math.h>
int main(){
int base;
int power;
int result=1;
printf("enter a base:  ");
scanf("%d",&base);
printf("enter exposant:  ");
scanf("%d",&power);
for (int i=1;i<=power;i++){
    result=result*base;
    }
printf("resule is : %d",result);
return 0;
}
