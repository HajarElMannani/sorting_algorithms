#include "sort.h"
/**
 *lomuto - lomuto pertition scheme function
 *@array: array to partition
 *@low_idx: lower index
 *@high_idx: highest index
 *@size: size of the array
 *Return: index of pivot
 */
int lomuto(int *array, int low_idx, int high_idx, size_t size)
{
int i, j;
int pivot;
int c;
i = low_idx;
pivot = array[high_idx];
for (j = low_idx; j < high_idx; j++)
{
if (array[j] < pivot)
{
if (i < j)
{
c = array[i];
array[i] = array[j];
array[j] = c;
print_array(array, size);
}
i++;
}
}
if (array[i] > pivot)
{
c = array[i];
array[i] = array[high_idx];
array[high_idx] = c;
print_array(array, size);
}
return (i);
}

/**
 *func_sort - function that helps to check sort the array
 *@array: rray to check sort
 *@low_idx: lower index
 *@high_idx: highest index
 *@size: size of the array
 *Return: Nothing
 */
void func_sort(int *array, int low_idx, int high_idx, size_t size)
{
int i;
if (low_idx < high_idx)
{
i = lomuto(array, low_idx, high_idx, size);
func_sort(array, low_idx, i - 1, size);
func_sort(array, i + 1, high_idx, size);
}
}
/**
 *quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *@array: array to sort
 *@size: size of the array
 *Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size <= 1)
{
return;
}
func_sort(array, 0, size - 1, size);
}
