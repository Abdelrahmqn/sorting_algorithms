#include "sort.h"
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
