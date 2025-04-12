/*
Implement a program that displays the data in an array in the reverse order
from which they were entered.
*/

#include <stdio.h>

int main()
{

  int i;
  int array[5] = {1, 2, 3, 4, 5};

  printf("\nDefault array: \n");

  for (i = 0; i < 5; i++)
  {
    printf("Array[%d]: %d\n", i, array[i]);
  }

  printf("\nReversed array: \n");

  for (i = 4; i >= 0; i--)
  {
    printf("Array[%d]: %d\n", i, array[i]);
  }

  return 0;
}