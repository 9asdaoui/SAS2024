#include <stdio.h>
#include <string.h>

#define max_res 100

 struct res{

     int age[max_res];
    char id[max_res][30];
    char name[max_res][30];
    char first_name[max_res][30];
    char phone[max_res][30];
    char status[max_res][30];
    char date[max_res][30];

 };




int main() {
    int size = 10;
    int choice = 0;



    while (choice != 7) {
    printf("\n______________________________________________________menu_____________________________________________________________\n");
    printf("\n                                              1. Add a reservation.\n");
    printf("\n                                              2. Modify or delete a reservation.\n");
    printf("\n                                              3. View reservation details.\n");
    printf("\n                                              4. Sorting reservations.\n");
    printf("\n                                              5. Search for reservations.\n");
    printf("\n                                              6. Statistics.\n");
    printf("\n                                              7. Exit the program.\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
printf("Enter here : ");
        scanf("%d", &choice);
struct res resevation;



    strcpy(resevation.status[0], "validated");
    strcpy(resevation.name[0], "asdaoui");
    strcpy(resevation.first_name[0], "Oussama");
    strcpy(resevation.phone[0], "+212703636116");
    strcpy(resevation.date[0], "17sep");
    resevation.age[0]=22;
    sprintf(resevation.id[0], "%c%c%d", resevation.name[0][0], resevation.first_name[0][0], 1);



    strcpy(resevation.status[1], "validated");
    strcpy(resevation.name[1], "benyedn");
    strcpy(resevation.first_name[1], "Hamzaa");
    strcpy(resevation.phone[1], "+2127852761752");
    strcpy(resevation.date[1], "16sep");
    resevation.age[1]=25;
    sprintf(resevation.id[1], "%c%c%d", resevation.name[1][0], resevation.first_name[1][0], 2);


    strcpy(resevation.status[2], "validated");
    strcpy(resevation.name[2], "benyahya");
    strcpy(resevation.first_name[2], "anass");
    strcpy(resevation.phone[2], "+2128647438");
    strcpy(resevation.date[2], "20sep");
    resevation.age[2]=13;
    sprintf(resevation.id[2], "%c%c%d", resevation.name[2][0], resevation.first_name[2][0], 3);


    strcpy(resevation.status[3], "postponed");
    strcpy(resevation.name[3], "mehdaouiii");
    strcpy(resevation.first_name[3], "wassim");
    strcpy(resevation.phone[3], "+212941627373");
    strcpy(resevation.date[3], "19sep");
    resevation.age[3]=29;
    sprintf(resevation.id[3], "%c%c%d", resevation.name[3][0], resevation.first_name[3][0], 4);



    strcpy(resevation.status[4], "postponed");
    strcpy(resevation.name[4], "kalimi");
    strcpy(resevation.first_name[4], "meryam");
    strcpy(resevation.phone[4], "+212703636116");
    strcpy(resevation.date[4], "15sep");
    resevation.age[4]=49;
    sprintf(resevation.id[4], "%c%c%d", resevation.name[4][0], resevation.first_name[4][0], 5);


    strcpy(resevation.status[5], "postponed");
    strcpy(resevation.name[5], "madih");
    strcpy(resevation.first_name[5], "zinbb");
    strcpy(resevation.phone[5], "+212703636116");
    strcpy(resevation.date[5], "23oct");
    resevation.age[5]=28;
    sprintf(resevation.id[5], "%c%c%d", resevation.name[5][0], resevation.first_name[5][0], 6);

    strcpy(resevation.status[6], "postponed");
    strcpy(resevation.name[6], "nasi");
    strcpy(resevation.first_name[6], "yassmin");
    strcpy(resevation.phone[6], "+212703636116");
    strcpy(resevation.date[6], "22sep");
    resevation.age[6]=20;
    sprintf(resevation.id[6], "%c%c%d", resevation.name[6][0], resevation.first_name[6][0], 7);



    strcpy(resevation.status[7], " cancelled");
    strcpy(resevation.name[7], "mehdaoui");
    strcpy(resevation.first_name[7], "reda");
    strcpy(resevation.phone[7], "+212627624565");
    strcpy(resevation.date[7], "12oct");
    resevation.age[7]=36;
    sprintf(resevation.id[7], "%c%c%d", resevation.name[7][0], resevation.first_name[7][0],8);;


    strcpy(resevation.status[8], " cancelled");
    strcpy(resevation.name[8], "malih");
    strcpy(resevation.first_name[8], "abdoo");
    strcpy(resevation.phone[8], "+212708927862");
    strcpy(resevation.date[8], "11sep");
    resevation.age[8]=16;
    sprintf(resevation.id[8], "%c%c%d", resevation.name[8][0], resevation.first_name[8][0], 9);



    strcpy(resevation.status[9], " processed");
    strcpy(resevation.name[9], "yezmii");
    strcpy(resevation.first_name[9], "yassin");
    strcpy(resevation.phone[9], "+2127036369935");
    strcpy(resevation.date[9], "13sep");
    resevation.age[9]=45;
    sprintf(resevation.id[9], "%c%c%d", resevation.name[9][0], resevation.first_name[9][0], 10);



switch (choice) {
case 1:{
    if (size < max_res) {

        char new_name[20];
        printf("Enter the patient name : ");
        scanf("%s", new_name);
        int found = 0;
            for (int i = 0; i < size; i++) {
                if (strcasecmp(resevation.name[i], new_name) == 0) {
                printf("This patients already exists.\n");
                found = 1;
    }
    }

        if (found!=1) {

        strcpy(resevation.name[size], new_name);

            printf("Enter first name : ");
            scanf("%s", resevation.first_name[size]);

            printf("Enter the age : ");
            scanf("%d",&resevation.age[size]);

            printf("Enter the phone number : ");
            scanf("%s", resevation.phone[size]);

            printf("Enter the Reservation date : ");
            scanf("%s", resevation.date[size]);

            printf("Status (validated, postponed, cancelled, processed). : ");
            scanf("%s", resevation.status[size]);

            sprintf(resevation.id[size], "%c%c%d", resevation.name[size][0], resevation.first_name[size][0], size+1);

            printf("the ID for %s is : %s",resevation.name[size],resevation.id[size]);
size++;
      }
    }
    }

    break;
case 2:{
    int ch=0;
    printf("                         1. to  modify an existing reservation : \n");
    printf("                         2. to delete an existing reservation :  ");
    scanf("%d",&ch);
    if(ch==1){
                    char id_edit[20];
        printf(" enter the ID reservation to modify : ");
        scanf("%s",id_edit);
    int found=0;
        for (int e = 0; e < size; e++) {
        if (strcmp(resevation.id[e],id_edit) == 0) {

            printf("Enter the name : ");
            scanf("%s", resevation.name[e]);

            printf("Enter first name : ");
            scanf("%s", resevation.first_name[e]);

            printf("Enter the age : ");
            scanf("%d",&resevation.age[e]);

            printf("Enter the phone number : ");
            scanf("%s", resevation.phone[e]);

            printf("Enter the Reservation date : ");
            scanf("%s", resevation.date[e]);

            printf("Status (validated, postponed, cancelled, processed). : ");
            scanf("%s", resevation.status[e]);

            printf("the reservation updated.\n");
        found = 1;

        }}
         if (found!=1) {
        printf("This resevation does not exist.\n");
}
}
    if(ch==2){

            char id_del[20];
    printf("enter the ID reservation to delete: ");
    scanf("%s", id_del);
int found = 0;
    for (int o = 0; o < size; o++) {
            if (strcmp(resevation.id[o], id_del) == 0) {
    found = 1;
        for (int j = o; j < size - 1; j++) {
                strcpy(resevation.id[j], resevation.id[j + 1]);
                strcpy(resevation.name[j], resevation.name[j + 1]);
                strcpy(resevation.first_name[j], resevation.first_name[j + 1]);
                resevation.age[j]= resevation.age[j + 1];
                strcpy(resevation.phone[j], resevation.phone[j + 1]);
                strcpy(resevation.status[j], resevation.status[j + 1]);
                strcpy(resevation.date[j], resevation.date[j + 1]);
          }size--;
                printf("reservation deleted.\n");

}
}
        if (found!=1) {
                printf("This contact is not exist.\n");
}

    }


}break;

case 3:{
    if (size == 0) {
                printf("No reservation right now.\n");
    }
        if (size!=0){
    for (int u = 0; u < size; u++) {

            printf("___________________________________________\n");
            printf("  ID : %s \n",resevation.id[u]);
            printf("-------------------------------------------\n");
            printf("name is : %s \n",resevation.name[u]);
            printf("first name is : %s \n",resevation.first_name[u]);
            printf("phone number  : %s \n",resevation.phone[u]);
            printf("age  : %d \n",resevation.age[u]);
            printf("status : %s \n",resevation.status[u]);
            printf("resevation date  : %s \n",resevation.date[u]);
}
}



}break;

case 4:{
    int c=0;
    printf("                         1.Sorting reservations by Name.\n");
    printf("                         2.Sorting reservations by status.\n   Enter here : ");
    scanf("%d",&c);


if(c==1){


    for (int i =0; i<size-1 ; i++) {
    for (int j =0; j<size-i-1; j++) {
            if (strcasecmp(resevation.name[j], resevation.name[j + 1]) > 0) {

                char temp_status[30];
                strcpy(temp_status, resevation.status[j]);
                strcpy(resevation.status[j], resevation.status[j+1]);
                strcpy(resevation.status[j+1], temp_status);


                char temp_name[30];
                strcpy(temp_name, resevation.name[j]);
                strcpy(resevation.name[j], resevation.name[j + 1]);
                strcpy(resevation.name[j+1], temp_name);


                char temp_first_name[30];
                strcpy(temp_first_name, resevation.first_name[j]);
                strcpy(resevation.first_name[j], resevation.first_name[j + 1]);
                strcpy(resevation.first_name[j+1], temp_first_name);


                char temp_phone[30];
                strcpy(temp_phone, resevation.phone[j]);
                strcpy(resevation.phone[j], resevation.phone[j + 1]);
                strcpy(resevation.phone[j+1], temp_phone);


                int temp_age = resevation.age[j];
                resevation.age[j] = resevation.age[j + 1];
                resevation.age[j+1] = temp_age;


                char temp_id[30];
                strcpy(temp_id, resevation.id[j]);
                strcpy(resevation.id[j], resevation.id[j + 1]);
                strcpy(resevation.id[j + 1], temp_id);


                char temp_date[30];
                strcpy(temp_date, resevation.date[j]);
                strcpy(resevation.date[j], resevation.date[j + 1]);
                strcpy(resevation.date[j + 1], temp_date);
}
}}

      for (int u = 0; u < size; u++) {

            printf("_________________________________________\n");
            printf("  ID : %s \n",resevation.id[u]);
            printf("-----------------------------------------\n");
            printf("name is : %s \n",resevation.name[u]);
            printf("first name is : %s \n",resevation.first_name[u]);
            printf("phone number  : %s \n",resevation.phone[u]);
            printf("age  : %d \n",resevation.age[u]);
            printf("status : %s \n",resevation.status[u]);
            printf("resevation date  : %s \n",resevation.date[u]);
}}
if(c==2){
        for (int i =0; i<size-1 ; i++) {
        for (int j =0; j<size-i-1; j++) {
                if (strcasecmp(resevation.status[j], resevation.status[j + 1])>0) {

                char temp_status[30];
                strcpy(temp_status, resevation.status[j]);
                strcpy(resevation.status[j], resevation.status[j+1]);
                strcpy(resevation.status[j+1], temp_status);


                char temp_name[30];
                strcpy(temp_name, resevation.name[j]);
                strcpy(resevation.name[j], resevation.name[j + 1]);
                strcpy(resevation.name[j+1], temp_name);


                char temp_first_name[30];
                strcpy(temp_first_name, resevation.first_name[j]);
                strcpy(resevation.first_name[j], resevation.first_name[j + 1]);
                strcpy(resevation.first_name[j+1], temp_first_name);


                char temp_phone[30];
                strcpy(temp_phone, resevation.phone[j]);
                strcpy(resevation.phone[j], resevation.phone[j + 1]);
                strcpy(resevation.phone[j+1], temp_phone);


                int temp_age = resevation.age[j];
                resevation.age[j] = resevation.age[j + 1];
                resevation.age[j+1] = temp_age;


                char temp_id[30];
                strcpy(temp_id, resevation.id[j]);
                strcpy(resevation.id[j], resevation.id[j + 1]);
                strcpy(resevation.id[j + 1], temp_id);


                char temp_date[30];
                strcpy(temp_date, resevation.date[j]);
                strcpy(resevation.date[j], resevation.date[j + 1]);
                strcpy(resevation.date[j + 1], temp_date);
}
}
}
}
        for( int u=0;u<size;u++){
            printf("_________________________________________\n");
            printf("  ID : %s \n",resevation.id[u]);
            printf("------------------------------------------\n");
            printf("name is : %s \n",resevation.name[u]);
            printf("first name is : %s \n",resevation.first_name[u]);
            printf("phone number  : %s \n",resevation.phone[u]);
            printf("age  : %d \n",resevation.age[u]);
            printf("status : %s \n",resevation.status[u]);
            printf("resevation date  : %s \n",resevation.date[u]);
}
}break;

case 5:{

    int k=0;
    printf("                           1.Search for a reservation by ID.\n ");
    printf("                           2.Search for a reservation by name. \nEnter here : ");
    scanf("%d",&k);

    if (k==1){
       char s_id[30];
      printf("Enter the ID : ");
        scanf("%s",s_id);
        for( int u=0;u<size;u++){
    if (strcmp(resevation.id[u],s_id) == 0){

            printf("  ID : %s \n",resevation.id[u]);
            printf("name is : %s \n",resevation.name[u]);
            printf("first name is : %s \n",resevation.first_name[u]);
            printf("phone number  : %s \n",resevation.phone[u]);
            printf("age  : %d \n",&resevation.age[u]);
            printf("status : %s \n",resevation.status[u]);
            printf("resevation date  : %s \n",resevation.date[u]);
}
}
}
    if (k==2){
        char s_name[30];
printf("Enter the name : ");
scanf("%s",s_name);
        for( int u=0;u<size;u++){
    if (strcasecmp(resevation.id[u],s_name) == 0){

            printf("  ID : %s \n",resevation.id[u]);
            printf("name is : %s \n",resevation.name[u]);
            printf("first name is : %s \n",resevation.first_name[u]);
            printf("phone number  : %s \n",resevation.phone[u]);
            printf("age  : %d \n",&resevation.age[u]);
            printf("status : %s \n",resevation.status[u]);
            printf("resevation date  : %s \n",resevation.date[u]);
}
}
    }
}break;

case 6:{
    int g=0;
    printf("                              1.the average age of patients who have booked.\n");
    printf("                              2.the number of patients by age group.\n");
    printf("                              3.the total number of reservations by status.\n");
    scanf("%d",&g);
if(g==1){
       int sum=0;
    for (int q=0 ;q<size; q++){
           sum=sum+resevation.age[q];
        }
        int averg=sum/size;
        printf("the average age of patients is : %d year",averg);

}
if(g==2){
        int kids=0;
        int adult=0;
        int old=0;
        for(int i=0; i<size; i++){
        if(resevation.age[i]<19){
            kids++;
        }
        if(resevation.age>18&&resevation.age<36){
            adult++;
        }
        if(resevation.age>35){
            old++;
        }

}
printf("patients 0-18 years : %d\npatients 19-35 years : %d\npatients 36+ years : %d",kids,adult,old);
       }
if(g==3){
        int va=0;
        int po=0;
        int ca=0;
        int pr=0;
       for( int u=0;u<size;u++){
    if (strcmp(resevation.status[u],"validated") == 0){
        va++;
    }
    if (strcmp(resevation.status[u],"postponed") == 0){
        po++;
    }
    if (strcmp(resevation.status[u],"cancelled") == 0){
        ca++;
    }
    if (strcmp(resevation.status[u],"processed") == 0){

    }  pr++;
}
           printf("Status validated = %d\n",va);
           printf("Status postponed = %d\n",po);
           printf("Status cancelled = %d\n",ca);
           printf("Status processed = %d\n",pr);



}
}break;

 case 7:{
     printf("good beyy :)");
 }

default:{
    printf("this option is not availabel ");
};


    }

    }
    return 0;
    }

