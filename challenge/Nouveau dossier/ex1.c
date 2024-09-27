#include <stdio.h>
int main () {

    float base,haut,result1,result2;
printf("enter the base : ");
scanf("%f",&base);

printf("enter the hauteur: ");
scanf("%f",&haut);

result1=(base*haut)/2;
printf("lair est %0.2f: ",result1);

result2=base*3;
printf("le perimetre est %0.2f: ",result2);
return 0;
}
