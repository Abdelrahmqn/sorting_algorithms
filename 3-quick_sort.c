#include "sort.h"
/**
* quick_sort - that sorts an array of integers group by group.
* @array: Array to be sorted.
* @size: the size of the arrray.
*/
void partition(int *array, int low, int high)
{
    int temp;
    int pivot = array[high];
    int j, i = low -1;

    for (j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
}
void quick_sort(int *array, size_t size);
{

}