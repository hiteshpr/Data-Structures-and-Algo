#include <stdio.h>
#include <stdlib.h>
int array[100], n;

void input(){
    int c;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
}
void bubblesort(){
    int c,d,swap;
    for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
    printf("Bubble Sort\n Sorted list in ascending order:\n");
    for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
}
void selectionsort(){
int c,d,swap,position;
    for ( c = 0 ; c < ( n - 1 ) ; c++ )
    {
        position = c;
    for ( d = c + 1 ; d < n ; d++ )
        {
            if ( array[position] > array[d] )
                position = d;
        }
        if ( position != c )
        {
            swap = array[c];
            array[c] = array[position];
            array[position] = swap;
        }
    }
    printf("Selection Sort \n Sorted list in ascending order:\n");

   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", array[c]);

}
int main()
{
    input();
    bubblesort();
    selectionsort();
    return 0;
}
