#include <stdio.h>

int main(){


    int nume,numbers;



    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    int A[nume];

    int i;
    for(i=0 ;i<nume ;i++){
            printf(" enter number %d : ",i+1);
            scanf("%d",&A[i]);
    }
    for (int e=0;e<nume ;e++){
        printf("element %d is %d\n",e+1,A[e]);
    }



return 0;
}

