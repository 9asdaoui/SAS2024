#include <stdio.h>

int main(){


    int nume,numbers;
    int sum=0;

    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    int A[nume];

    int i;
    for(i=0 ;i<nume ;i++){
            printf(" enter number %d : ",i+1);
            scanf("%d",&A[i]);
    }
    for (int e=0;e<nume ;e++){
            sum=sum+A[e];
    }
printf("the sum of the element is : %d ",sum);


return 0;
}
