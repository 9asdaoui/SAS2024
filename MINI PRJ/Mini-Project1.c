
#include <stdio.h>
#include <string.h>
int  main() {

int size=0;
//this  while to keep the  user able working  again
int choice;
while(choice!=7){
        int choice;
//user can see the options and select a choice
printf("1. Add a book to stock.");
printf("2. Show all available books.");
printf("3. Search for a book by its title.");
printf("4. Update the quantity of a book.");
printf("5. Remove a book from stock.");
printf("6. Show total number of books in stock.");
printf("7.to exist the  programme.");
    scanf("%d",&choice);

//this switch case to determine  the  size of array

if (choice==1){
    size++;
    }


}
//don't  forget  to check how to  add a string to  array(i did)

char book_name[size][20];
char book_author[size][20];
int book_price[size];
int book_quantity[size];
char new_book[20];
int b,c;
//this switch case is to det the next action
switch(choice){
//1.this  case is for choice 1 to add new book  info





case 1:

//add an if condition  to check  for  a doublcat


printf("enter the name of  the  book : ");
   scanf("%s",&new_book);


for (int i=0;i<size;i++){
        if (book_name[i]==new_book){
                printf("this book is already exist. ");
                b=1;}}
        if (b!=1){
//book-name
   strcpy(book_name[size],new_book);

//book-author
   printf("enter the name  of  the  author : ");
   scanf("%c",&book_author[size][10]);

//book-price
   printf("enter the book price : ");
   scanf("%d",&book_price);

//book-quantity
   printf("enter  the available quantity : ");
   scanf("%i",&book_quantity);


        }
   break;

//2.this case is  to show all books;

case 2:

   for (int u=0; u<size; u++ ){
       printf("%c",book_name[u]);}
    if (size=0){
        printf("no books right now");
       }
break;
//3.this part is to show a specific book user search for

case 3:
   printf("enter the name of the  book to check if  available");
    char check_book[1][];
   scanf("%c",&check_book);
     for (int j=0; j<size; j++){
        if (book_name[j]==check_book[1]){
              printf("this  book is  exist");
              printf("the  author is :%c",book_author[j]);
              printf("the  price of  this book is :%d",book_price[j]);
              printf("there  is  %d available",book_quantity[j]);
              }
     }
//check how  to store the element that the  user  enter and work  with it
break;

//4.this statement is for update th book-quantity

case 4;
//same here check for string
   printf(" enter  the  name of the  book you want  to update his  quantity")
   char new_nameq[1];
   scanf("%c",&new_nameq[1]);

   printf("enter the new quantity")
   int new_qua;
   scanf("%d",&new_qua);

   for(int e=0; e<size; e++){
         if(book_name[e]==new_nameq[1]){
               book_quantity[e]=new_qua[1];
               printf("done.");
         }
         if(book_name[e]!=new_quantity[1])
               printf("this  book is not exist in  the stock ")
   }
break;

//5.this statement for deleting a  book

case 5:

  printf("  enter  the  name of the book  you  want  to delete  :"):
  char del_book[1][];
  scanf("%d",&del_book)
for(int o=0;o<size;o++){
    if(book_name[o]==del_book[1]){
       for(int j=0;j<size;j++){
          book_name[j+1]=book_name[j]
          book_price[j+1]=book_price[j]
          book_author[j+1]=book_author[j]
          book_quantity[j+1]=book_quantity[j]
       }
}
}
//this to make the  array-1
size--;


break;
//show the total number  of available book

case 6:

    for (int y=0;y<size;y++){
         int c=0;
           b=b+book_quantity[y];
           }

    printf("%d",c);
break;
default:
    printf("this choice is not available");
}


return 0;
}
