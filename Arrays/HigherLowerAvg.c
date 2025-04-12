/*
Write a program that has an array to store 10 integers.
The program should prompt the user to enter the 10 integers, store them in the
array, and then display 3 pieces of information about the stored data:

1. The highest value;
2. The lowest value;
3. The average of the values.
*/

#include <stdio.h>

int main()
{

  int i, hig, low, count = 0;
  int array[10];
  float avg;

  printf("Enter the values to populate the array: \n");
  for (i = 0; i < 10; i++)
  {
    printf("Array[%d]: ", i);
    scanf("%d", &array[i]);
    count += array[i];
  }

  hig = low = array[0];

  for (i = 1; i < 10; i++)
  {
    if (hig < array[i])
    {
      hig = array[i];
    }
    if (low > array[i])
    {
      low = array[i];
    }
  }

  avg = (float)count / 10;

  printf("\nLower value: %d\n", low);
  printf("Higher value: %d\n", hig);
  printf("Average: %.2f\n", avg);

  return 0;
}