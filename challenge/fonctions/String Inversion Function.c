#include <stdio.h>

void fac(int size,int tab[size]){
    for (int u=0;u<size;u++){
            printf("%d ",tab[u]);
    }
}
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
    fac(nume,A[nume]);
return 0;
}

