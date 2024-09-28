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
    for (int e=0;e<nume ;e++){
if (c>10){
        c=A[e]%10;
}

if (c==2||c==4||c==6||c==8||c==10){
    printf(" %d",A[e]);
}
    }



return 0;
}

