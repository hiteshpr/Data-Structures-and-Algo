#include <stdio.h>
#include <stdlib.h>
#define size 5
struct student{
    int rollno;
    char name[10];
    int year;
    float cgpa;
};
int enteredData = 0;
struct student stu[size];


void addData(){

   enteredData++;

   if(enteredData <= size){
     printf("Enter Records of student number : %d ", enteredData);

        printf("\n Enter Rollno: ");
                scanf("%d",&stu[enteredData].rollno);
            printf("\n Enter Name: ");
                scanf("%s",&stu[enteredData].name);
            printf("\n Enter year: ");
                scanf("%d",&stu[enteredData].year);
            printf("\n Enter CGPA: ");
                scanf("%f",&stu[enteredData].cgpa);
    }else{
        printf("\n array full! \n");

    }
}

void display(){
    int i;
        for(i=1;i<=enteredData;i++){
             printf("\n Rollno: %d, Name: %s, Year: %d, CGPA: %f \n",stu[i].rollno,stu[i].name,stu[i].year,stu[i].cgpa);
        }
}

void menu(){
  int choice=0;
  while(choice != 5){
    printf("enter 1 to input data \n 2 to display \n 5 to exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: addData();
        break;
        case 2: display();
        break;
    }
  }
}
int main()
{
    menu();
    return 0;
}
