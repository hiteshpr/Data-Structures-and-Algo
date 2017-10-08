#include <stdio.h>
#include <stdlib.h>

int first[10][10], second[10][10],m, n; //first and second matrix m is row and n coloumn

void inputmatrix(){

    int c, d;

    printf("Enter the number of rows and columns of matrix\n");
        scanf("%d%d", &m, &n);

    printf("Enter the elements of first matrix\n");

    for (c = 0; c < m; c++)    //getting the first matrix
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);

   printf("Enter the elements of second matrix\n");

   for (c = 0; c < m; c++)      //getting the second matrix
      for (d = 0 ; d < n; d++)
            scanf("%d", &second[c][d]);

}
void sumofmatrix(){

    int c,d,sum[10][10];

    printf("Sum of entered matrices:-\n");

    for (c = 0; c < m; c++) {
        for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
    printf("\n");
}
}
void mulmatrix(){
    int c,d,k,multiply[10][10],sum=0;
        for (c = 0; c < m; c++) {
            for (d = 0; d < n; d++) {
                for (k = 0; k < m; k++) {
                    sum = sum + first[c][k]*second[k][d];
            }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("Product of entered matrices:-\n");

    for (c = 0; c < m; c++) {
      for (d = 0; d < n; d++)
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }

}
void transpose(){
    int c,d,transpose[10][10];

    for (c = 0; c < m; c++)
      for( d = 0 ; d < n ; d++ )
         transpose[d][c] = first[c][d];

    printf("Transpose of first matrix :-\n");

   for (c = 0; c < n; c++) {        //first matrix transpose
      for (d = 0; d < m; d++)
         printf("%d\t",transpose[c][d]);
      printf("\n");
    }
    for (c = 0; c < m; c++)
      for( d = 0 ; d < n ; d++ )
         transpose[d][c] = second[c][d];

    printf("Transpose of second matrix :-\n");

   for (c = 0; c < n; c++) {        //second matrix transpose
      for (d = 0; d < m; d++)
         printf("%d\t",transpose[c][d]);
      printf("\n");

    }
}
void menu(){
  int choice=0;
  while(choice != 5){
    printf("enter 1 to input \n 2 to add \n 3 to multiply \n 4 to find transpose\n 5 to exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: inputmatrix();
        break;
        case 2: sumofmatrix();
        break;
        case 3: mulmatrix();
        break;
        case 4: transpose();
        break;
    }
  }
}
int main()
{
    menu();
    return 0;
}
