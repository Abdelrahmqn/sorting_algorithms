#include "sort.h"
/**
* bubble_sort - sorts an array of integers in ascending order using[bbl algrzm]
* @array: array to be sorted.
* @size: the size of the array.
*
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
	for (j = 0; j < size - i - 1; j++)
	{
	if (array[j] > array[j + 1])
	{
	temp = array[j];
	array[j] = array[j + 1];
	array[j + 1] = temp;
	print_array(array, size);
	}
	}
	}
}
/**
* swap - function that swap two elements
* @a: first.
* @b: second.
*
*/
void swap(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	b = temp;
}
