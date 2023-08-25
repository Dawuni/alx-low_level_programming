#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list to print
*
*Return: the number of nodes printed
*/

size_t print_list(const list_t *h)
{
	const list_t *cursor = h;
	size_t c = 0;

	while (cursor != NULL)
	{
		if (cursor->str != NULL)
		printf("[%d] %s\n", cursor->len, cursor->str);
		else
		printf("[0] (nil)\n");
		c += 1;
		cursor = cursor->next;
	}

	return (c);
}
