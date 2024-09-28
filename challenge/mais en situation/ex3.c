#include <stdio.h>
int main () {

    int n,b;
    printf(" enter a number :");
    scanf("%d",&n);
      for (int i=2;i<n;i++){
            if (n%i==0)
            b=0;
            if (n%i!=0)
            b=1;
      }
if (b=0){
    printf("this number is not a premiem");
}
            if (b=1){
            printf(" this number is premiem");
            }

return 0;
}

