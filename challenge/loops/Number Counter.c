#include <stdio.h>

int main(){
int number;
int count=0;

printf("enter a number : ");
scanf("%d",&number);

for(int i=0;number>0;i++){
    number/=10;
    count++;
}
printf("%d",count);

return 0;
}
