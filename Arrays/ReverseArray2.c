/*
Write a program that has an array to store 5 integers. The program should
prompt the user to enter the 5 integers, store them in the array, and then
display the array's content in reverse order (from back to front).
*/

#include <stdio.h>

int main()
{

  int i;
  int array[5];

  printf("Enter the values to populate the array: \n");
  for (i = 0; i < 5; i++)
  {
    printf("Array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  printf("\nReversed array: \n");

  for (i = 4; i >= 0; i--)
  {
    printf("Array[%d]: %d\n", i, array[i]);
  }

  return 0;
}