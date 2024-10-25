#include "sort.h"
/**
 *selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *@array: array to sort
 *@size: length of the array
 *Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
int c = 0;
int min;
size_t i, j, idx;
if (array == NULL || size <= 1)
return;
for (i = 0; i < size - 1; i++)
{
idx = i;
min = array[i];
for (j = i + 1; j < size; j++)
{
if (array[j] < min)
{
idx = j;
min = array[j];
}
else
{
continue;
}
}
if (idx != i)
{
c = array[i];
array[i] = array[idx];
array[idx] = c;
}
print_array(array, size);
}
}
