
#include <stdio.h>

void fac(int a){

    for (int i=1;i<a;i++){
        a=a*(a-i);
    }
    printf("%d",a);

}
