/*
Write a program that has an array to store 10 integers. The program should
prompt the user to enter the 10 integers and then display only the odd values
that appear in the array.
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

  int i;
  int array[10];

  printf("Enter the values to populate the array: \n");
  for (i = 0; i < 10; i++)
  {
    printf("Array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  printf("\nShowing only the odd indexes: \n");
  for (i = 0; i < 10; i++)
  {
    if (array[i] % 2 != 0)
    {
      printf("\nArray[%d]: %d", i, array[i]);
    }
  }

  return 0;
}