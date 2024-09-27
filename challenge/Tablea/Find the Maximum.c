#include <stdio.h>

int main(){


    int nume,numbers;
    int j;

    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    int A[nume];

    int i;
    for(i=0 ;i<nume ;i++){
            printf(" enter number %d : ",i+1);
            scanf("%d",&A[i]);
    }
    j=A[0];

    for (int e=0;e<nume ;e++){

           if(A[e]>j){
                j=A[e];
           }

    }
printf("the lagest elements is : %d ",j);


return 0;
}

