#include <stdio.h>
#include <string.h>

#define max_books 100

int main() {
    int size = 0;
    int choice = 0;

    char book_name[max_books][20];
    char book_author[max_books][20];
    int book_price[max_books];
    int book_quantity[max_books];

    while (choice != 7) {
    printf("1. Add a book to stock.\n");
    printf("2. Show all available books.\n");
    printf("3. Search for a book by its title.\n");
    printf("4. Update the quantity of a book.\n");
    printf("5. Remove a book from stock.\n");
    printf("6. Show total number of books in stock.\n");
    printf("7.Exit the programme.\n");
        scanf("%d", &choice);

switch (choice) {
        case 1:
    if (size < max_books) {
        char new_book[20];
        printf("Enter the name of the book: ");
        scanf("%s", new_book);

        int found = 0;
            for (int i = 0; i < size; i++) {
                if (strcmp(book_name[i], new_book) == 0) {
                printf("This book already exists.\n");
                found = 1;
        break;
    }
    }

        if (found!=1) {
        strcpy(book_name[size], new_book);

            printf("Enter the name of the author: ");
            scanf("%s", book_author[size]);

            printf("Enter the book price: ");
            scanf("%d", &book_price[size]);

            printf("Enter the available quantity: ");
            scanf("%d", &book_quantity[size]);

                        size++;
    }
    }
        break;

case 2:
        if (size == 0) {
                printf("No books available right now.\n");
    }
        if (size!=0){
    for (int u = 0; u < size; u++) {

            printf("book name is : %s \n",book_name[u]);
            printf("book author is : %s \n",book_author[u]);
            printf("the price : %d \n",book_price[u]);
            printf("the quantity : %d \n",book_quantity[u]);
}
}
    break;

case 3:{
    char check_book[20];
        printf("Enter the name of the book to check if available: ");
        scanf("%s",check_book);

    int found=0;
        for (int j=0;j<size;j++) {
        if (strcmp(book_name[j], check_book) == 0) {

            printf("The author is: %s\n", book_author[j]);
            printf("The price of this book is: %d\n", book_price[j]);
            printf("There are %d available.\n", book_quantity[j]);
                found = 1;
        break;
}
}
        if (found!=1){
        printf("This book is not exist.\n");
}}
  break;

case 4:
{
char new_nameq[20];
    printf("Enter the name of the book you want to update its quantity: ");
    scanf("%s", new_nameq);
int found = 0;
    for (int e = 0; e < size; e++) {
        if (strcmp(book_name[e], new_nameq) == 0) {
            printf("Enter the new quantity: ");
            scanf("%d", &book_quantity[e]);
            printf("Quantity updated.\n");
        found = 1;
                break;
}
}
    if (found!=1) {
        printf("This book does not exist in the stock.\n");
}
}
    break;

    case 5:
{
char del_book[20];
    printf("Enter the name of the book you want to delete: ");
    scanf("%s", del_book);

int found = 0;
    for (int o = 0; o < size; o++) {
            if (strcmp(book_name[o], del_book) == 0) {
    found = 1;
        for (int j = o; j < size - 1; j++) {
                strcpy(book_name[j], book_name[j + 1]);
                strcpy(book_author[j], book_author[j + 1]);
                book_price[j] = book_price[j + 1];
                book_quantity[j] = book_quantity[j + 1];
}
        size--;
                printf("Book deleted.\n");
    break;
}
}
        if (found!=1) {
                printf("This book is not exist.\n");
}
}
break;

  case 6:
{
    int total = 0;
     for (int y = 0; y < size; y++) {
            total =total+book_quantity[y];
}
        printf("Total number of books in stock: %d\n", total);
}
                break;

            default:
                printf("This choice is not available.\n");
}}

    return 0;
}

