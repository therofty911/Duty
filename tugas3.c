#include <stdio.h>
#include<string.h>

struct student
{
    char nama[50];
    char major[15];
    float gpa;
};

// void newstudent(struct student n[a]){
    
//     printf("\tInsert Student Information\n");
//     printf("---------------------------------------------\n");
//     printf("Nama: ",n.nama); scanf("%s", n[a].nama); fflush(stdin);
//     printf("Major: ",n.major); scanf("%s", n[a].major); fflush(stdin);
//     printf("GPA: ",n.gpa); scanf("%.2f", n[a].gpa); fflush(stdin);

//     printf("========================================================\n");
//     printf("Nama : %s\n", n.nama);
//     printf("Major: %s\n", n.major);
//     printf("GPA  : %.2f\n", n.gpa);
// }

void listStudent(struct student n[], int i){
    int j;
    printf("\tList of Student\n");
    printf("--------------------------------------------\n");
    printf("|No.|        Name         |     Major    |   GPA  |\n");
    for(j=1;j<i;j++){
        printf("|%d  |%-7s             |%-10s       |   %.2f  |\n",j,n[i].nama,n[i].major,n[i].gpa);
    }
    // return 0;

}


int main(){
    int i;
    int b=0;
    char pilihan;
    struct student n[20];
    do{   
        for(i=1;i<20;i++){

            printf("Welcome to simple student database (%d/20)",b);
            printf("\n1. Show List Student");
            printf("\n2. Input new student");
            printf("\n3. Exit");
            printf("\nPilihan : "); scanf("%c", &pilihan);



            switch(pilihan){
                case '1':
                listStudent(n,i);
                // printf("\tInsert Student Information\n");
                // printf("---------------------------------------------\n");
                // printf("Nama: "); scanf("%s", n[a].nama); fflush(stdin);
                // printf("Major: "); scanf("%s", n[a].major); fflush(stdin);
                // printf("GPA: "); scanf("%.2f", n[a].gpa); fflush(stdin);
                // b++;
                break;
                case '2':
                printf("\tInsert Student Information\n");
                printf("---------------------------------------------\n");
                printf("Nama: "); scanf("%[^#]#", n[i].nama); fflush(stdin);
                printf("Major: "); scanf("%[^#]#", n[i].major); fflush(stdin);
                printf("GPA: "); scanf("%.f", n[i].gpa); fflush(stdin);
                printf("Inserting data...");
                printf("New student information added\n");
                b++;
                break;
                case '3':
                printf("you have been exit from the menu :)");
                break;

            }
        }

    }while(pilihan !='2');
    
}