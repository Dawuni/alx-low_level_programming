#include "lists.h"

/**
 * print_listint_t - prints all elements of a list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		num++;
		cursor = cursor->next;
	}
	return (num);
}
