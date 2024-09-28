#include <stdio.h>

int main(){


    int nume,numbers,pre;

    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    int A[nume];
    int i;
    for(i=0 ;i<nume ;i++){
            printf(" enter number %d : ",i+1);
            scanf("%d",&A[i]);
    }

    printf("enter the number to check if prisent:");
    scanf("%d",&pre);
    int did=0;
    for (int u=0;u<nume;u++){
        if (A[u]==pre){
            printf("the number is exist");
            did=1;

        }
    }
 if (did==0){
            printf("the number is not exist");
        }

return 0;
}
