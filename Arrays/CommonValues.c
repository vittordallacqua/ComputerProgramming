/*
Write a program that uses two arrays (A and B) to store 5 integers each.
The program should prompt the user to provide integer values to fill arrays
A and B, and then display the common values between the two arrays, that is,
values that appear in both arrays A and B.
*/

#include <stdio.h>

int main()
{

  int i, j;
  int array_A[5], array_B[5];

  printf("Enter the values to populate the Array A: \n");
  for (i = 0; i < 5; i++)
  {
    printf("Array A[%d]: ", i);
    scanf("%d", &array_A[i]);
  }

  printf("\nEnter the values to populate the Array B: \n");
  for (i = 0; i < 5; i++)
  {
    printf("Array B[%d]: ", i);
    scanf("%d", &array_B[i]);
  }

  printf("\nCommon values between the array A and B: \n");
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (array_A[i] == array_B[j])
      {
        printf("%d", array_A[i]);
      }
    }
  }

  return 0;
}