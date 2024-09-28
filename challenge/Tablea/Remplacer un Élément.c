#include <stdio.h>

int main(){


    int nume,numbers,pre;

    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    int A[nume];
    int u;
    for(u=0 ;u<nume ;u++){
            printf(" enter number %d : ",u+1);
            scanf("%d",&A[u]);
    }
    int old;
    printf("enter the number you want to replace: ");
    scanf("%d",&old);
    int neww;
    printf(" ebter the new replacment: ");
    scanf("%d",&neww);
     for (int i=0;i<nume;i++){
        if (A[i]==old){
            A[i]=neww;
        }
     }
    for (int e=0;e<nume ;e++){
        printf("element %d is %d\n",e+1,A[e]);
    }


return 0;
}
