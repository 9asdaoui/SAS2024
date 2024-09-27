#include <stdio.h>

int main(){


    int nume,numbers;


    printf("enter the number of the elements : ");
    scanf("%d",&nume);
    int A[nume];


    for(int i=0;i<nume;i++){
            printf(" enter number %d : ",i+1);
            scanf("%d",&A[i]);
    }

    for (int e=0;e<nume;e++)
        {
            for (int j=0;j<nume-1;j++)
           if (A[j]>A[j+1]){
            int n=A[j];
            A[j]=A[j+1];
            A[j+1]=n;
        }
        }

    for(int f=0;f<nume;f++)
    {
        printf("%d  " , A[f]);

    }



return 0;
}
