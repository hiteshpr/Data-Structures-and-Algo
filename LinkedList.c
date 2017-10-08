#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node *head= NULL;
int noOfNodes=0;
void addData(){
    int x;
    struct Node *temp= NULL;
    printf("\nEnter Data\n");
    scanf("%d",&x);
    (temp)=(struct Node*)malloc(sizeof(struct Node));
    temp->data= x;
    temp->next= NULL;
    if(head == NULL)
    {
        head = temp;
    }else{
        struct Node *last=head;
        while(last-> next != NULL){
            last=last->next;
        }
        last->next = temp;
        }
        noOfNodes++;
}
void traverse(){
    struct Node *temp= head;
    printf("\n List is \n");
    if(temp == NULL)
        printf(" Empty \n");
    else{
    while(temp != NULL){
      printf(" %d ",temp->data);
      temp = temp->next;
    }
    printf("\n");
    }
}
void deleteData(){
int i,position,abc,abcd;
    if(head == NULL)
        printf("\n List is empty\n");
    else {
    struct Node *temp=head;
        printf("\nEnter position for deletion \n");
        scanf("%d",&position);
        if(position == 1){
            head = temp->next;
            abc= temp->data;
            printf("\n %d deleted successfully!\n",abc);
        }else{
            for(i =1; i<position-1; i++){
                temp = temp->next;
            }
            abcd = (temp->next)->data;
            temp->next = (temp->next)->next;
            printf(" \n %d  deleted successfully!\n",abcd);
        }
    }
}
void menu(){
  int choice=0;
  while(choice != 5){
    printf("enter 1 to add data \n 2 to traverse \n enter 3 to delete \n 5 to exit\n");
    scanf("%d",&choice);
switch(choice){
        case 1: addData();
        break;
        case 2: traverse();
        break;
        case 3: deleteData();
        break;
        }
  }
}

int main()
{
    menu();
    return 0;
}
