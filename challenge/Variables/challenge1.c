#include <stdio.h>
int main() {
   char name[20];
   char lastname[20];
   int age;
   char sex[10];
   char email[30];

   printf("enter your name:");
   scanf("%s",name);

   printf("enter your lastname:");
   scanf("%s",lastname);

   printf("enter your age:");
   scanf("%d",&age);

   printf(" enter your gender:");
   scanf("%s",sex);

   printf("enter your email:");
   scanf("%s",email);

   printf("your name is %s \nyour last name is %s\nyour age is %d \nyour gender is %s\nyour email is %s",name,lastname,age,sex,email);

   return 0;
}
