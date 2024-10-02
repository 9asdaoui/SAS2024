#include <stdio.h>


int main(){

    int num=0;
    int array[num];
    int temp;

    printf(" enter size ");
    scanf("%d",&num);

for(int i=0;i<num;i++){
    printf("enter numberr ");
    scanf("%d",&array[i]);
}
 for(int u=0;u<num;u++){
        printf("%d",array[u]);}

 for(int x=0;x<num-1;x++){
        for(int y=0;y<num-x-1;y++){
            if(array[y]>array[y+1]){
                temp=array[y];
                array[y]=array[y+1];
                array[y+1]=temp;
}
}
}
 for(int u=0;u<num;u++){
        printf(" %d",array[u]);
}

return 0;
}


