#include <stdio.h>
#include <stdlib.h>
#define capacity 6

int queue[capacity];
int front = 0;
int rear = 0;

int isEmpty() {
   if(rear == front)
        return 1;
    return 0;
}

int isFull() {
   if(rear == capacity)
        return 1;
    return 0;
}

void addelement(){
    if(!isFull()){
        printf("\n enter element \n");
        scanf("%d",&queue[rear]);
        rear++;
    }else{
        printf("\n Queue is full!");
    }
}

void deleteElement(){
    int i;
    if(isEmpty()){
        printf("\n Queue is empty! \n");
    }else{
        for(i=front;i<rear-1;i++)
            queue[i] = queue[i+1];
        rear--;
    }
}

void transverse(){
    int i;
    if(!isEmpty()){
        for(i=front;i<rear;i++)
            printf(" %d ",queue[i]);
        printf("\n");
    }else {
        printf("\nQueue is empty!\n");
    }
}

void menu(){
  int choice=0;
  while(choice != 5){
    printf("enter 1 to add element \n 2 to delete \n 3 to traverse \n 5 to exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: addelement();
        break;
        case 2: deleteElement();
        break;
        case 3: transverse();
        break;

    }
  }
}

int main()
{
    menu();
    return 0;
}
