#include <stdio.h>

int main(){
int num;
int resulthex[100];
int resultbin[32];
int count=0;
int counts=0;
printf("enter a number :");
scanf("%d",&num);
int num1=num;
//for calcul binary
for (int i=0;num>0;i++){
        resultbin[i]=num%2;
        num=num/2;
        count++;
}
for (int i=count-1;i>=0;i--){
    printf("%d",resultbin[i]);

}
//for calcul hexdicimal

for (int i=0;num1>0;i++){
        resulthex[i]=num1%16;
        num1=num1/16;
        counts++;

}
printf("\n");

for (int i=counts-1;i>=0;i--){
        switch(resulthex[i]){
            case 10:
                printf("A");
            break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
            default:
                printf("%d",resulthex[i]);
}
}
return 0;
}
