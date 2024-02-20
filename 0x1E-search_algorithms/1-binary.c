#include "search_algos.h"

/*
* binary_search - searches for a value in an array of integers
*
* @array: pointer to the first element of the array
* @size: number of elements in the array
* @value: value to search for

* Return: first index where value is located or -1 if value is not present
*/
int binary_search(int *array, size_t size, int value)
{
int right, mid, left;
int i;

if (array == NULL)
{
return (-1);
}
left = 0;
right = size - 1;
while (left <= right)
{
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
else

printf("\n");
}
mid = left + (right - left) / 2;
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}
return (-1);
}
