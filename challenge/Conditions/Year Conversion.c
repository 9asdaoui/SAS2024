#include <stdio.h>
int main(){
int num;
int year;



printf("press 1:to convert to monthes\npress 2:to covert to days\npress 3:to convert to hours\npress 4:to convert tho minuts\n");
scanf("%d",&num);
printf("enter the year:");
scanf("%d",&year);
switch(num){
 case 1:
    printf("convert %d to months is %d\n",year, year*12);
     break;
 case 2:
    printf("convert %d to days is %d\n",year,year*365);
    break;
 case 3:
    printf("convert %d to hours is %d\n",year,year*24*365);
    break;
 case 4:
    printf("convert %d to seconds is %d\n",year,year*60*24*365);
    break;
 default:
    printf("number is uncorectc");
}









return 0 ;
}
