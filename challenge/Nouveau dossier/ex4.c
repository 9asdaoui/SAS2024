#include <stdio.h>
int main () {


    float numbers,temp,b,c;
    float a[5];
    for (int i=0;i<5;i++){
        printf("enter number %d : ",i+1);
        scanf("%f",&a[i]);
    }
    for (int j=0;j<5;j++){
            if (a[j]>a[j+1])
                    b=a[j];
            if (a[j]<a[j+1])
                    c=a[j];

        }
printf("%0.2f",b);
printf("%0.2f",c);
return 0;
}


