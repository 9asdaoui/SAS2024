#include <stdio.h>
int main () {


    float numbers,temp,b,c;
    float a[5];
    for (int i=0;i<5;i++){
        printf("enter number %d : ",i+1);
        scanf("%f",&a[i]);
    }
    c=a[0];
    b=a[0];
    for (int j=0;j<5;j++){
            if (a[j]>b)
                    b=a[j];
            if (a[j]<c)
                    c=a[j];

        }
printf("max is :%0.2f\n",b);
printf("min is :%0.2f",c);
return 0;
}


