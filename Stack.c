#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}

int isfull() {

   if(top == SIZE)
      return 1;
   else
      return 0;
}
void pop() {
   int data;

   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      printf("\n data poped is  %d\n",data);
   } else {
      printf("\nCould not retrieve data, Stack is empty.\n");
   }
}

void push() {
int data;
printf("\nenter data\n");
scanf("%d",&data);

   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("\nCould not insert data, Stack is full.\n");
   }
}
void display ()
{
    int i;
    if (isempty())
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\nThe stack have is\n");
            for (i = top; i >= 0; i--)
        {
            printf ("%d\n", stack[i]);
        }
    }
        printf ("\n");
}
void menu(){
  int choice=0;
  while(choice != 5){
    printf("enter 1 to push data \n 2 to pop data \n enter 3 to display\n 5 to exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
    }
  }
}
int main()
{
   menu();
    return 0;
}
