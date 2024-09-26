#include <stdio.h>

int main(){
int num;
int b;
printf("enter number:");
scanf("%d",&num);
while(b=0){
    b=num%10
    num=num/10;
    printf("%d",b);
}

    return 0;
}

