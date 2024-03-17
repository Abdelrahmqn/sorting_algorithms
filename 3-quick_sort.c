#include "sort.h"
/**
 * Lomuto - Performs Lomuto partitioning's quick sort.
 * @array: Array to be sorted.
 * @low: Starting index of the subarray.
 * @high: Ending index of the subarray.
 * Return: Index of the pivot element.
 */

int Lomuto(int *array, int low, int high)
{
	int pivot = array[high];
	int temp1, temp2, j, i = low - 1;

	for (j = low; j <= high; j++)
	{
	if (array[j] <= pivot)
	{
	i++;
	temp1 = array[i];
	array[i] = array[j];
	array[j] = temp1;
	print_array(array, high + 1);
	}
	}
	temp2 = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp2;
	return (i + 1);

}
/**
* L_sorted - Recursively using Lomuto partition scheme
* @array: Array to be sorted
* @low: Starting index of the subarray
* @high: Ending index of the subarray
*/
void L_sorted(int *array, int low, int high)
{
	int pvt;

	if (low < high)
	{
	pvt = Lomuto(array, low, high);
	Lomuto(array, low, pvt - 1);
	Lomuto(array, pvt + 1, high);
	}
}
/**
* quick_sort - Sorts using the QuickSort algorithm.
* @array: sorted.
* @size: Size of array.
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
	return;
	}

	L_sorted(array, 0, size - 1);
}
