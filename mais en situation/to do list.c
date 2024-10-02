#include <stdio.h>
#include <string.h>
struct todolist{
    int number [10];
    char name[10][20];
    char desc[10][100];
    char etat[10][10];
    char date[10][10];
};
int main(){
    struct todolist m1;


    strcpy(m1.name[0], "wake up");
    strcpy(m1.desc[0], "waking up to schol");
    m1.number[0] = 1;
    strcpy(m1.etat[0], "to do");
    strcpy(m1.date[0], "12sep");


    strcpy(m1.name[1], "home work");
    strcpy(m1.desc[1], "do math home work ");
    m1.number[1] = 2;
    strcpy(m1.etat[1], "done");
    strcpy(m1.date[1], "12sep");


    strcpy(m1.name[2], "test");
    strcpy(m1.desc[2], "prepar for the math test");
    m1.number[2] = 3;
    strcpy(m1.etat[2], "to do");
    strcpy(m1.date[2], "12sep");
int choice=0;
while(choice!=7){
    printf("1.to show all list\n2.to edit etat\n3.to sho only done mession\n4.to show only to do mession\n5.to exit the program\n");

    scanf("%d",&choice);

    switch (choice){

case 1:{
    for(int i=0;i<3;i++){
 printf("number :%d\nname : %s\ndescreption : %s\netat : %s\ndate : %s\n ",
         m1.number[i],m1.name[i], m1.desc[i], m1.etat[i], m1.date[i]);
}}
break;
case 2:{

    printf("enter the number of the mession : ");
    int mesnum;
    scanf("%d",&mesnum);

   for(int i=0;i<2;i++){
    if (m1.number[i]==mesnum){
        printf(" enter the new etat : ");

        scanf("%s",m1.etat[i]);
        printf(" the etat updated.");
    }
   }

}break;

case 3:{
     for(int i=0;i<2;i++){
    if (strcmp(m1.etat[i],"done")){
       printf("number :%d\nname : %s\ndescreption : %s\netat : %s\ndate : %s\n ",
         m1.number[i],m1.name[i], m1.desc[i], m1.etat[i], m1.date[i]);
}
}}break;
case 4:{
    for(int i=0;i<2;i++){
    if (strcmp(m1.etat[i],"to do")){
       printf("number :%d\nname : %s\ndescreption : %s\netat : %s\ndate : %s\n ",
         m1.number[i],m1.name[i], m1.desc[i], m1.etat[i], m1.date[i]);
}
}

}break;

default:
    printf("this choice is not exist");




    }




}
return 0;

}


