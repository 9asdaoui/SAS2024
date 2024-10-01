#include <stdio.h>


struct info{
char name[10];
char lastname[10];
int age;
};

int main(){

struct info s1;
    printf("Enter your name : ");
    scanf("%s",&s1.name);

    printf("Enter your lastname : ");
    scanf("%s",&s1.lastname);

    printf("Enter your age : ");
    scanf("%d",&s1.age);



printf("your name is: %s\n", s1.name);
printf("your last name is : %s\n", s1.lastname);
printf("your age is : %d",s1.age);


return 0;
}
