#include "sort.h"
/**
 * swap_nodes - function that swap two nodes
 * @h: Pointer to the head of the list
 * @n1: Pointer to the first node to be swapped
 * @n2: Pointer to the second node to be swapped
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev  != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: List of integers
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iteration, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iteration = (*list)->next; iteration != NULL; iteration = tmp)
	{
		tmp = iteration->next;
		insert = iteraton->prev;
		while (insert != NULL && iteration->n < insert->n)
		{
			swap_nodes(list, &insert, iteration);
			print_list((const listint_t *)*list);
		}
	}
}
