#include "lists.h"

/**
 *sum_listint - sums of all the data in a linked list
 *@head: head of the linked list
 *
 *Return: sum of the data number
 */

int sum_listint(listint_t *head)
{
	listint_t *pointer = head;
	size_t total = 0;

	while (pointer != NULL)
	{
		total += pointer->n;
		pointer = pointer->next;
	}
	return (total);
}
