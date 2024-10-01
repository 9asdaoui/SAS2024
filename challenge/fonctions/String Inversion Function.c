#include <stdio.h>
#include <stdlib.h>



void arrayf (int size,int A[size]){
    for (int i=0; i<size ;i++){
        printf("%d",A[i]);
    }


}


int main (){
    printf("how much elements you want to enter");
    int size1;
    scanf("%d",&size1);
    int numbers[size1];

     for(int i=size1-1;i>=0 ;i--){
            printf(" enter number : ");
            scanf("%d",numbers[i]);
}
arrayf(size1,numbers[size1]);
return 0 ;
}
