#include <stdio.h>

void pairornot(int num){
int c=num%10;

if (c==2||c==4||c==6||c==8||c==0)
    printf("1");
if (c==1||c==3||c==5||c==7||c==9)
    printf("0");
}




int main(){

    int number;
    int c;

printf("enter your number : ");
scanf("%d",&number);

    pairornot(number);


return 0;
}
