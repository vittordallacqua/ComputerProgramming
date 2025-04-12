/*
Write a program that has an array to store 10 floating-point values.
The program should prompt the user to enter the 10 floats and then display
the positions in the array where negative values are stored.
*/

#include <stdio.h>

int main()
{
  int i;
  float array[10];

  printf("Enter the values to populate the array: \n");
  for (i = 0; i < 10; i++)
  {
    printf("Array[%d]: ", i);
    scanf("%f", &array[i]);
  }

  printf("\nShowing only the negative values: \n");
  for (i = 0; i < 10; i++)
  {
    if (array[i] < 0)
    {
      printf("\nArray[%d]: %.2f", i, array[i]);
    }
  }

  return 0;
}