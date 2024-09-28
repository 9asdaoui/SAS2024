#include <stdio.h>

int main(){


    int nume,numbers;



    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    int A[nume];
    int b;
    int i,u;
    for(i=nume-1;i>=0 ;i--){
            printf(" enter number : ");
            scanf("%d",&A[i]);
    }
    for (u=0;u<nume;u++){

        printf("%d",A[u]);
    }
return 0;
}
