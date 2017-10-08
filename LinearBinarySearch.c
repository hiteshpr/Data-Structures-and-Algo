#include <stdio.h>
#include <stdlib.h>

int array[100], n;

void input(){
    int c;
    printf("Enter the number of elements in array\n");
        scanf("%d",&n);

   printf("Enter %d integer(s)\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
}

void linearsearch(){
    int search,c;
    printf("Enter the number to search\n");
    scanf("%d", &search);

   for (c = 0; c < n; c++)
   {
      if (array[c] == search)     /* if required element found */
      {
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }
   if (c == n)
      printf("%d is not present in array.\n", search);

}

void binarysearch(){

    int search,first, last, middle;
    printf("Enter value to find\n");
    scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);

}
void menu(){
  int choice=0;
  while(choice != 5){
    printf("enter 1 to input \n 2 to linear search \n 3 to binary search \n 5 to exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: input();
        break;
        case 2: linearsearch();
        break;
        case 3: binarysearch();
        break;
    }
  }
}
int main()
{
    menu();
    return 0;
}
