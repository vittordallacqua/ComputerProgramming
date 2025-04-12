/*
Write a program that has an array (Vet) of 10 integers and an integer
variable x. The user should provide 10 values to fill the Vet array and then
provide an integer value to be stored in x. The program should check how many
times the value of x appears in the Vet array and display
this count on the screen.
*/

#include <stdio.h>

int main()
{

  int i, x, count;
  int array[10];

  printf("Enter the values to populate the array: \n");
  for (i = 0; i < 10; i++)
  {
    printf("Array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  printf("Enter a value for x: ");
  scanf("%d", &x);

  for (i = 0; i < 10; i++)
  {
    if (array[i] == x)
    {
      count++;
    }
  }

  printf("\nX appeared %d times in the array", count);

  return 0;
}