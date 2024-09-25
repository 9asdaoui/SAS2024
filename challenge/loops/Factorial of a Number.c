#include <stdio.h>
int main(){

int number;
int i;
int result=1;
printf("enter a number:");
scanf("%d",&number);
for (i=1;i<=number;i++){
result=result*i;
}
printf("factorial of the number is %d",result);

return 0;
}
