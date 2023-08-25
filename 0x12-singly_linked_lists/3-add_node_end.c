#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 *@head: duplicate pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dupp;
	int lenn;
	list_t *neww, *last;

	neww = malloc(sizeof(list_t));
	if (neww == NULL)
		return (NULL);

	dupp = strdup(str);
	if (str == NULL)
	{
		free(neww);
		return (NULL);
	}

	for (lenn = 0; str[lenn];)
		lenn++;

	neww->str = dupp;
	neww->lenn = lenn;
	neww->next = NULL;

	if (*head == NULL)
		*head = neww;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = neww;
	}
	return (*head);
}
