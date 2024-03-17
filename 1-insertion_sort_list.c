#include <stdlib.h>
#include "sort.h"

/**
* insertion_sort_list - that sorts an array of integers group by group.
* @list: Array to be sorted.
*
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *cstm, *head;

	head = (*list)->next;
	while (head != NULL)
	{
	cstm = *list;
	temp = head;
	head = head->next;

	while (cstm != temp && cstm->n < temp->n)
	{
	cstm = cstm->next;
	}

	if (cstm != temp)
	{
	print_list(*list);

	temp->prev->next = temp->next;
	if (temp->next != NULL)
	{
	temp->next->prev = temp->prev;
	}

	temp->next = cstm;
	temp->prev = cstm->prev;
	if (cstm->prev != NULL)
	cstm->prev->next = temp;
	cstm->prev = temp;

	if (temp->prev == NULL)
	*list = temp;
	}
	}
}
