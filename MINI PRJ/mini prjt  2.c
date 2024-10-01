#include <stdio.h>
#include <string.h>

#define max_contacts 100

 struct mycontact{
    char name[max_contacts][30];
    char phone[max_contacts][20];
    char email[max_contacts][30];
 };
int main() {
    int size = 0;
    int choice = 0;



    while (choice != 6) {
    printf("1. Add a Contact.\n");
    printf("2. Edit a Contact.\n");
    printf("3. Delete a Contact.\n");
    printf("4. Show All Contacts.\n");
    printf("5. Search for a Contact.\n");
    printf("6.Exit the programme.\n");
        scanf("%d", &choice);

struct mycontact s1;

switch (choice) {
        case 1:{
    if (size < max_contacts) {

        char new_contact[20];
        printf("Enter the new contact name: ");
        scanf("%s", new_contact);

        int found = 0;
            for (int i = 0; i < size; i++) {
                if (strcmp(s1.name[i], new_contact) == 0) {
                printf("This contact already exists.\n");
                found = 1;
        break;
    }
    }

        if (found!=1) {
        strcpy(s1.name[size], new_contact);

            printf("Enter the phone number : ");
            scanf("%s", s1.phone[size]);

            printf("Enter the email addres : ");
            scanf("%s", s1.email[size]);

      }                  size++;
    }
    }
    break;
    case 2: {

        char namedit[20];
        printf(" enter the contact name you want to edit");
        scanf("%d",namedit);
    int found=0;
        for (int e = 0; e < size; e++) {
        if (strcmp(s1.name[e],namedit) == 0) {
            printf("Enter the new phone number: ");
            scanf("%s",s1.phone[e]);
            printf("Enter the new Email : ");
            scanf("%s",s1.email[e]);

            printf("the contact updated.\n");
        found = 1;

                break;
        }}
         if (found!=1) {
        printf("This contact does not exist in the stock.\n");
}}
    break;


case 3: {

    char del_contact[20];
    printf("Enter the name of the contact you want to delete: ");
    scanf("%s", del_contact);

int found = 0;
    for (int o = 0; o < size; o++) {
            if (strcmp(s1.name[o], del_contact) == 0) {
    found = 1;
        for (int j = o; j < size - 1; j++) {
                strcpy(s1.name[j], s1.name[j + 1]);
                strcpy(s1.email[j], s1.email[j + 1]);
                strcpy(s1.phone[j], s1.phone[j + 1]);

}
        size--;
                printf("contact deleted.\n");
    break;
}
}
        if (found!=1) {
                printf("This contact is not exist.\n");
}




}break;

case 4:{
if (size == 0) {
                printf("No contacts available right now.\n");
    }
        if (size!=0){
    for (int u = 0; u < size; u++) {

            printf("name is : %s \n",s1.name[u]);
            printf("email is : %s \n",s1.email[u]);
            printf("phon number is : %s \n",s1.phone[u]);

}
}
}break;


case 5:{

        char check_contact[20];
        printf("Enter the name of the contact to check if available: ");
        scanf("%s",check_contact);

    int found=0;
        for (int j=0;j<size;j++) {
        if (strcmp(s1.name[j], check_contact) == 0) {

            printf(" name : %s\n", s1.name[j]);
            printf("phone number: %s\n", s1.phone[j]);
            printf("email :%s\n", s1.email[j]);
                found = 1;
        break;
}
}
        if (found!=1){
        printf("This contact is not exist.\n");
}

}break;

default:
    printf("this option is not exist");
};
    }
    return 0;
    }
