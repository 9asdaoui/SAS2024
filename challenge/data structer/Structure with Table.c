#include <stdio.h>


struct info{
char name[20];
char lastname[20];
};

int main(){

struct info s1;
    printf("Enter the name : ");
    scanf("%s",&s1.name);

    printf("Enter the lastname : ");
    scanf("%s",&s1.lastname);

    printf("how many grades you want to store : ");
    int size;

    scanf("%d",&size);

    int grades[size];

for(int i=0 ; i<size ; i++){
    printf("Enter the grade %d : ",i+1);
    scanf("%d",&grades[i]);
}



printf("name : %s\n", s1.name);
printf("last name : %s\n", s1.lastname);

for(int i=0;i<size ;i++){
printf("grade %d : %d\n",i+1,grades[i]);
}


return 0;
}

