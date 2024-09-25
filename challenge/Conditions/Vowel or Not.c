#include <stdio.h>
int main(){
 char character;
 printf("enter a character:");
 scanf("%c",character);

 switch (character){
 case 'i':
    printf(" i is a vowel.");
     break;
 case 'a':
    printf("a is a powel.");
    break;
 case 'e':
    printf("e is a powel.");
    break;
 case 'y':
    printf("y is a powel.");
    break;
 case 'o':
    printf("o is a powel.");
    break;
 default:
    print(" the character is not a powel:/");
     }
return 0;
}
