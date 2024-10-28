#include "sort.h"
/**
 *shell_sort - function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 *@array: array to sort
 *@size: size of the array
 *Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
size_t j;
int tmp;
size_t i, gap;
gap = knuth(size);
if (array == NULL || size < 2)
return;
for (gap = (gap - 1) / 3; gap > 0; gap = (gap - 1) / 3)
{
for (i = gap; i < size; i++)
{
tmp = array[i];
for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
{
array[j] = array[j - gap];
}
array[j] = tmp;
}
print_array(array, size);
}
}
/**
 *knuth - function that creates gaps
 *@size: size of the array
 *Return: Nothing
 */
size_t knuth(size_t size)
{
size_t n = 1;
while (n <= size)
{
n = n * 3 + 1;
}
return (n);
}
