#include <stdio.h>

int main(){


    int nume,numbers,fact;



    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    printf("enter the facture : ");
    scanf("%d",&fact);
    int A[nume];

    int i;
    for(i=0 ;i<nume ;i++){
            printf(" enter number %d : ",i+1);
            scanf("%d",&A[i]);
    }
    for (int e=0;e<nume ;e++){
        printf(" %d",A[e]*fact);
    }



return 0;
}


