#include <stdlib.h>
#include "lists.h"

/**
 * list_len - note the number of elements in a linked list
 *@h: pointer to the list
 *
 *Return: the number of elements in a linked list
*/

size_t list_len(const list_t *h)
	{
		size_t elmts = 0;

		while (h)
		{
			elmts++;
			h = h->next;
		}

		return (elmts);
	}
