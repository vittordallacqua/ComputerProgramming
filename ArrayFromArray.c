/*
Write a program that has two arrays (A and B) to store 10 integers each.
The program should prompt the user to enter 10 integer values to store in the
first array (A). The second array (B) should be calculated as follows: each
element of array B (at position i) should be the sum of the elements in array A
from the start up to the same position i.
*/

#include <stdio.h>

int main()
{

  int i;
  int array_A[10], array_B[10];

  printf("Enter the values to populate the array: \n");
  for (i = 0; i < 10; i++)
  {
    printf("Array A[%d]: ", i);
    scanf("%d", &array_A[i]);
  }

  array_B[0] = array_A[0];

  for (i = 1; i < 10; i++)
  {
    array_B[i] = array_B[i - 1] + array_A[i];
  }

  printf("\nArray B: \n");
  for (i = 0; i < 10; i++)
  {
    printf("Array B[%d]: %d\n", i, array_B[i]);
  }

  return 0;
}
