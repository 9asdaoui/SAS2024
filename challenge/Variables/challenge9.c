#include <stdio.h>
#include <math.h>
int main(){
    float x;
    float z;
    float y;
    float Z;
    float Y;
    float X;
    printf("enter the Coordinates for the first point:\nx:");
    scanf("%f",&x);
    printf("y:");
    scanf("%f",&y);
    printf("z:");
    scanf("%f",&z);

    printf("enter the Coordinates for the second point:\nx:");
    scanf("%f",&X);
    printf("y:");
    scanf("%f",&Y);
    printf("z");
    scanf("%f",&Z);
    float a;
    float b;
    float c;
    float distance;
    a=pow(y*2-Y*2,2);
    b=pow(x*2-X*2,2);
    c=pow(z*2-Z*2,2);
    distance=sqrt(a+c+b);
    printf("the distance between two given points in 3D space is:%d",distance);


return 0;
}
