#include <stdio.h>

int main(){


    int nume,numbers;



    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    int A[nume];

    int i,c;
    for(i=0 ;i<nume ;i++){
            printf(" enter number %d : ",i+1);
            scanf("%d",&A[i]);
    }
    int b=0;
    for (int e=0;e<nume ;e++){
            b=b+A[e];

    }
printf("moyen = %d",c=b/2);


return 0;
}

