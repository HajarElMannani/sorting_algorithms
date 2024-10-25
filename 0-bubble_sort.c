#include "sort.h"

/**
 *bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *@array: the array to sort
 *@size: size of the array
 *Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
int c = 0;
size_t i, j;
if (!array || size <= 1)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
c = array[j];
array[j] = array[j + 1];
array[j + 1] = c;
}
else
continue;
print_array(array, size);
}
}
}
