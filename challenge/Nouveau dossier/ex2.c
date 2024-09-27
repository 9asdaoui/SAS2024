#include <stdio.h>
int main () {
float temp;


printf("saisir temperatur : ");
scanf("%d",&temp);

if (temp>=38){
    printf("vous avez de la fievre.");
}
if (temp<38){
    printf("voter temperatur est normal.");
}
return 0;
}

