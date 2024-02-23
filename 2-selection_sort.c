#include "sort.h"
/**
* selection_sort - that sorts an array of integers in ascenging.
* @array: Array to be sorted.
* @size: the size of the array.
*
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, MINidx, temp;

	for (i = 0; i < size; i++)
	{
	MINidx = i;
	for (j = i + 1; j < size; j++)
	{
	if (array[j] < array[MINidx])
	{
	MINidx = j;
	}
	}
	if (MINidx != i)
	{
	temp = array[i];
	array[i] = array[MINidx];
	array[MINidx] = temp;
	print_array(array, size);
	}
	}
}
