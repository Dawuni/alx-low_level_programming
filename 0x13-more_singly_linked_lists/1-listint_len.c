#include "lists.h"

/**
 *listint_len - Returns the number of elements
 *in a linked list
 *@h: A pointer to the head of the linked list
 *
 *Return: the number of elements in a listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
