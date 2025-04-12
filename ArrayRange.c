/*
Create a program that calculates the range of an array of N elements.
*/

#include <stdio.h>

int main()
{
    int i, n, min, max, range;

    printf("Enter the array size: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the values to populate the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    min = max = array[0];

    for (i = 1; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
        if (max < array[i])
        {
            max = array[i];
        }
    }

    range = max - min;

    printf("\nArray range: %d", range);

    return 0;
}