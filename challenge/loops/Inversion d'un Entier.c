#include <stdio.h>

int main(){
int num;
int val;

printf("enter number:");
scanf("%d",&num);
while(num>0){
        val=num%10;
        printf("%d",val);
        num=num/10;

}
    return 0;
}
