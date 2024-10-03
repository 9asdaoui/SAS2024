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
    printf("\n                       1. Add a reservation.\n");
    printf("\n                       2. Modify or delete a reservation.\n");
    printf("\n                       3. View reservation details.\n");
    printf("\n                       4. Sorting reservations.\n");
    printf("\n                       5. Search for reservations.\n");
    printf("\n                       6. Statistics.\n");
    printf("\n                       7. Exit the program.\n  \n        Enter here : ");


        scanf("%d", &choice);
struct res m1;


//
    strcpy(m1.status[0], "validated");
    strcpy(m1.name[0], "asdaoui");
    strcpy(m1.first_name[0], "Oussama");
    strcpy(m1.phone[0], "+212703636116");
    strcpy(m1.date[0], "17sep");
    m1.age[0]=22;
    sprintf(m1.id[0], "%c%c%d", m1.name[0][0], m1.first_name[0][0], 1);



    strcpy(m1.status[1], "validated");
    strcpy(m1.name[1], "benyedn");
    strcpy(m1.first_name[1], "Hamzaa");
    strcpy(m1.phone[1], "+2127852761752");
    strcpy(m1.date[1], "16sep");
    m1.age[1]=25;
    sprintf(m1.id[1], "%c%c%d", m1.name[1][0], m1.first_name[1][0], 2);


    strcpy(m1.status[2], "validated");
    strcpy(m1.name[2], "benyahya");
    strcpy(m1.first_name[2], "anass");
    strcpy(m1.phone[2], "+2128647438");
    strcpy(m1.date[2], "20sep");
    m1.age[2]=13;
    sprintf(m1.id[2], "%c%c%d", m1.name[2][0], m1.first_name[2][0], 3);


    strcpy(m1.status[3], "postponed");
    strcpy(m1.name[3], "mehdaouiii");
    strcpy(m1.first_name[3], "wassim");
    strcpy(m1.phone[3], "+212941627373");
    strcpy(m1.date[3], "19sep");
    m1.age[3]=29;
    sprintf(m1.id[3], "%c%c%d", m1.name[3][0], m1.first_name[3][0], 4);



    strcpy(m1.status[4], "postponed");
    strcpy(m1.name[4], "kalimi");
    strcpy(m1.first_name[4], "meryam");
    strcpy(m1.phone[4], "+212703636116");
    strcpy(m1.date[4], "15sep");
    m1.age[4]=49;
    sprintf(m1.id[4], "%c%c%d", m1.name[4][0], m1.first_name[4][0], 5);


    strcpy(m1.status[5], "postponed");
    strcpy(m1.name[5], "madih");
    strcpy(m1.first_name[5], "zinbb");
    strcpy(m1.phone[5], "+212703636116");
    strcpy(m1.date[5], "23oct");
    m1.age[5]=28;
    sprintf(m1.id[5], "%c%c%d", m1.name[5][0], m1.first_name[5][0], 6);

    strcpy(m1.status[6], "postponed");
    strcpy(m1.name[6], "nasi");
    strcpy(m1.first_name[6], "yassmin");
    strcpy(m1.phone[6], "+212703636116");
    strcpy(m1.date[6], "22sep");
    m1.age[6]=20;
    sprintf(m1.id[6], "%c%c%d", m1.name[6][0], m1.first_name[6][0], 7);



    strcpy(m1.status[7], " cancelled");
    strcpy(m1.name[7], "mehdaoui");
    strcpy(m1.first_name[7], "reda");
    strcpy(m1.phone[7], "+212627624565");
    strcpy(m1.date[7], "12oct");
    m1.age[7]=36;
    sprintf(m1.id[7], "%c%c%d", m1.name[7][0], m1.first_name[7][0],8);;


    strcpy(m1.status[8], " cancelled");
    strcpy(m1.name[8], "malih");
    strcpy(m1.first_name[8], "abdoo");
    strcpy(m1.phone[8], "+212708927862");
    strcpy(m1.date[8], "11sep");
    m1.age[8]=16;
    sprintf(m1.id[8], "%c%c%d", m1.name[8][0], m1.first_name[8][0], 9);



    strcpy(m1.status[9], " processed");
    strcpy(m1.name[9], "yezmii");
    strcpy(m1.first_name[9], "yassin");
    strcpy(m1.phone[9], "+2127036369935");
    strcpy(m1.date[9], "13sep");
    m1.age[9]=45;
    sprintf(m1.id[9], "%c%c%d", m1.name[9][0], m1.first_name[9][0], 10);



switch (choice) {
case 1:{
    if (size < max_res) {

        char new_name[20];
        printf("Enter the patient name : ");
        scanf("%s", new_name);
        int found = 0;
            for (int i = 0; i < size; i++) {
                if (strcmp(m1.name[i], new_name) == 0) {
                printf("This patients already exists.\n");
                found = 1;
        break;
    }
    }

        if (found!=1) {

        strcpy(m1.name[size], new_name);

            printf("Enter first name : ");
            scanf("%s", m1.first_name[size]);

            printf("Enter the age : ");
            scanf("%d",&m1.age[size]);

            printf("Enter the phone number : ");
            scanf("%s", m1.phone[size]);

            printf("Enter the Reservation date : ");
            scanf("%s", m1.date[size]);

            printf("Status (validated, postponed, cancelled, processed). : ");
            scanf("%s", m1.status[size]);

            sprintf(m1.id[size], "%c%c%d", m1.name[size][0], m1.first_name[size][0], size+1);

            printf("the ID for %s is : %s",m1.name[size],m1.id[size]);
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
        if (strcmp(m1.id[e],id_edit) == 0) {

            printf("Enter the name : ");
            scanf("%s", m1.name[e]);

            printf("Enter first name : ");
            scanf("%s", m1.first_name[e]);

            printf("Enter the age : ");
            scanf("%d",&m1.age[e]);

            printf("Enter the phone number : ");
            scanf("%s", m1.phone[e]);

            printf("Enter the Reservation date : ");
            scanf("%s", m1.date[e]);

            printf("Status (validated, postponed, cancelled, processed). : ");
            scanf("%s", m1.status[e]);

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
            if (strcmp(m1.id[o], id_del) == 0) {
    found = 1;
        for (int j = o; j < size - 1; j++) {
                strcpy(m1.id[j], m1.id[j + 1]);
                strcpy(m1.name[j], m1.name[j + 1]);
                strcpy(m1.first_name[j], m1.first_name[j + 1]);
                m1.age[j]= m1.age[j + 1];
                strcpy(m1.phone[j], m1.phone[j + 1]);
                strcpy(m1.status[j], m1.status[j + 1]);
                strcpy(m1.date[j], m1.date[j + 1]);
          }size--;
                printf("reservation deleted.\n");

}
}
        if (found!=1) {
                printf("This contact is not exist.\n");
}
size--;
    }


}break;
case 3:{
    if (size == 0) {
                printf("No reservation right now.\n");
    }
        if (size!=0){
    for (int u = 0; u < size; u++) {

            printf("___________________________________________\n");
            printf("  ID : %s \n",m1.id[u]);
            printf("-------------------------------------------\n");
            printf("name is : %s \n",m1.name[u]);
            printf("first name is : %s \n",m1.first_name[u]);
            printf("phone number  : %s \n",m1.phone[u]);
            printf("age  : %d \n",m1.age[u]);
            printf("status : %s \n",m1.status[u]);
            printf("resevation date  : %s \n",m1.date[u]);
}
}



}break;

case 4:{
    int c=0;
    printf("                         1.Sorting reservations by Name.\n");
    printf("                         2.Sorting reservations by status.\n   Enter here : ");
    scanf("%d",&c);


if(c==1){
    for (int i=0;i<size;i++) {
        for (int j=0;j<size-i-1;j++) {
            if (strcmp(m1.name[j], m1.name[j + 1]) > 0) {
                    char temp_name[30], temp_first_name[30], temp_phone[30], temp_status[30], temp_date[30];
                    int temp_age;
                    char temp_id[30];

                    strcpy(temp_name, m1.name[j]);
                    strcpy(m1.name[j], m1.name[j + 1]);
                    strcpy(m1.name[j + 1], temp_name);

                    strcpy(temp_first_name, m1.first_name[j]);
                    strcpy(m1.first_name[j], m1.first_name[j + 1]);
                    strcpy(m1.first_name[j + 1], temp_first_name);

                    strcpy(temp_phone, m1.phone[j]);
                    strcpy(m1.phone[j], m1.phone[j + 1]);
                    strcpy(m1.phone[j + 1], temp_phone);

                    strcpy(temp_status, m1.status[j]);
                    strcpy(m1.status[j], m1.status[j + 1]);
                    strcpy(m1.status[j + 1], temp_status);

                    strcpy(temp_date, m1.date[j]);
                    strcpy(m1.date[j], m1.date[j + 1]);
                    strcpy(m1.date[j + 1], temp_date);

                    temp_age = m1.age[j];
                    m1.age[j] = m1.age[j + 1];
                    m1.age[j + 1] = temp_age;

                    strcpy(temp_id, m1.id[j]);
                    strcpy(m1.id[j], m1.id[j + 1]);
                    strcpy(m1.id[j + 1], temp_id);
}
}}
      for (int u = 0; u < size; u++) {

            printf("_________________________________________\n");
            printf("  ID : %s \n",m1.id[u]);
            printf("-----------------------------------------\n");
            printf("name is : %s \n",m1.name[u]);
            printf("first name is : %s \n",m1.first_name[u]);
            printf("phone number  : %s \n",m1.phone[u]);
            printf("age  : %d \n",m1.age[u]);
            printf("status : %s \n",m1.status[u]);
            printf("resevation date  : %s \n",m1.date[u]);
}}
if(c==2){
        for (int i =0; i<size ; i++) {
        for (int j =0; j<size-i-1; j++) {
                if (strcmp(m1.status[j], m1.status[j + 1])>0) {

                char temp_status[30];
                strcpy(temp_status, m1.status[j]);
                strcpy(m1.status[j], m1.status[j+1]);
                strcpy(m1.status[j+1], temp_status);


                char temp_name[30];
                strcpy(temp_name, m1.name[j]);
                strcpy(m1.name[j], m1.name[j + 1]);
                strcpy(m1.name[j+1], temp_name);


                char temp_first_name[30];
                strcpy(temp_first_name, m1.first_name[j]);
                strcpy(m1.first_name[j], m1.first_name[j + 1]);
                strcpy(m1.first_name[j+1], temp_first_name);


                char temp_phone[30];
                strcpy(temp_phone, m1.phone[j]);
                strcpy(m1.phone[j], m1.phone[j + 1]);
                strcpy(m1.phone[j+1], temp_phone);


                int temp_age = m1.age[j];
                m1.age[j] = m1.age[j + 1];
                m1.age[j+1] = temp_age;


                char temp_id[30];
                strcpy(temp_id, m1.id[j]);
                strcpy(m1.id[j], m1.id[j + 1]);
                strcpy(m1.id[j + 1], temp_id);


                char temp_date[30];
                strcpy(temp_date, m1.date[j]);
                strcpy(m1.date[j], m1.date[j + 1]);
                strcpy(m1.date[j + 1], temp_date);
}
}
}
}
        for( int u=0;u<size;u++){
            printf("_________________________________________\n");
            printf("  ID : %s \n",m1.id[u]);
            printf("------------------------------------------\n");
            printf("name is : %s \n",m1.name[u]);
            printf("first name is : %s \n",m1.first_name[u]);
            printf("phone number  : %s \n",m1.phone[u]);
            printf("age  : %d \n",m1.age[u]);
            printf("status : %s \n",m1.status[u]);
            printf("resevation date  : %s \n",m1.date[u]);
}
}break;

case 5:{

    int k=0;
    printf("                         1.Search for a reservation by ID. ");
    printf("                         2.Search for a reservation by name. \nEnter here : ");
    scanf("%d",&k);

    if (k==1){
       char s_id[30];
printf("Enter the ID : ");
scanf("%s",s_id);
        for( int u=0;u<size;u++){
    if (strcmp(m1.id[u],s_id) == 0){

            printf("  ID : %s \n",m1.id[u]);
            printf("name is : %s \n",m1.name[u]);
            printf("first name is : %s \n",m1.first_name[u]);
            printf("phone number  : %s \n",m1.phone[u]);
            printf("age  : %s \n",m1.age[u]);
            printf("status : %s \n",m1.status[u]);
            printf("resevation date  : %s \n",m1.date[u]);
}
}
}
    if (k==2){
        char s_name[30];
printf("Enter the name : ");
scanf("%s",s_name);
        for( int u=0;u<size;u++){
    if (strcmp(m1.id[u],s_name) == 0){

            printf("  ID : %s \n",m1.id[u]);
            printf("name is : %s \n",m1.name[u]);
            printf("first name is : %s \n",m1.first_name[u]);
            printf("phone number  : %s \n",m1.phone[u]);
            printf("age  : %s \n",m1.age[u]);
            printf("status : %s \n",m1.status[u]);
            printf("resevation date  : %s \n",m1.date[u]);
}
}
    }
}break;

case 6:{
    int g=0;
    printf("1.the average age of patients who have booked.");
    printf("2.the number of patients by age group.");
    printf("3.the total number of reservations by status.");
    scanf("%d",&g);
if(g==1){
       int sum=0;
    for (int q=0 ;q<size; q++){
           sum=sum+m1.age[q];
        }
        int averg=sum/size;
        printf("the average age of patients is : %d ",averg);

}
if(g==2){
        int kids=0;
        int adult=0;
        int old=0;
        for(int i=0; i<size; i++){
        if(m1.age[i]<19){
            kids++;
        }
        if(m1.age>18&&m1.age<36){
            adult++;
        }
        if(m1.age>35){
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
    if (strcmp(m1.status[u],"validated") == 0){
        va++;
    }
    if (strcmp(m1.status[u],"postponed") == 0){
        po++;
    }
    if (strcmp(m1.status[u],"cancelled") == 0){
        ca++;
    }
    if (strcmp(m1.status[u],"processed") == 0){

    }  pr++;
}
           printf("Status validated = %d",va);
           printf("Status postponed = %d",po);
           printf("Status cancelled = %d",ca);
           printf("Status processed = %d",pr);



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

