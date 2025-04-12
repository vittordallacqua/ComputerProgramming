/*
Implement a program that outputs all items located at even indices in an array.
*/

#include <stdio.h>

int main()
{

  int i;
  int array[5] = {1, 2, 3, 4, 5};

  for (i = 0; i < 5; i++)
  {
    if (array[i] % 2)
    {
      printf("Array[%d] = %d\n", i, array[i]);
    }
  }

  return 0;
}