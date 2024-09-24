#include <stdio.h>
int main() {

    float km;
    float m;
    printf("the speed in kilometers per hour (km/h):");
    scanf("%f",&km);
    m=km* 0.27778;
    printf("the speed in meters per second (m/s) : %.2f",m);

return 0;
}
