#include <stdio.h>
int main(){
int number;
printf(" enter a number:");
scanf("%d",&number);
int i;
for (i=1;i<=10;i++){
    printf("%dx%d=%d\n",number,i,number*i);

}
return 0;
}
