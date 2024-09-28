#include <stdio.h>

int main(){
    printf("enter the size o element : ");
    int size1;
    scanf("%d",&size1);

    int tab1[size1];

    for(int i=0 ;i<size1 ;i++){
            printf(" enter number %d : ",i+1);
            scanf("%d",&tab1[i]);
    }

    printf("enter the size o element : ");
    int size2;
    scanf("%d",&size2);

    int tab2[size2];

    for (int e=0;e<size2 ;e++){
            printf(" enter number %d : ",e+1);
            scanf("%d",&tab2[e]);
    }
    int size3;
    size3=size2+size1;
    int tab3[size3];

    for(int u=0;u<size1;u++){
        tab3[u]=tab1[u];
    }
    for (int o=size1;o<=size3;o++){
        tab3[o]=tab2[o-size1];
    }
    for (int x=0;x<size3 ;x++){
        printf("%d\n",tab3[x]);
    }

return 0;
}
