#include <stdio.h>

int main(){


    int nume,numbers;



    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    int A[nume];
    int B[nume];

    int i;
    for(i=0 ;i<nume ;i++){
            printf(" enter number %d : ",i+1);
            scanf("%d",&A[i]);
    }
    for (int j=0;j<nume;j++){
        A[j]=B[j];
    }
    for (int e=0;e<nume ;e++){
        printf("element %d is %d\n",e+1,A[e]);
    }

for (int u=0;u<nume ;u++){
        printf("element %d is %d\n",u+1,B[u]);}

return 0;
}

