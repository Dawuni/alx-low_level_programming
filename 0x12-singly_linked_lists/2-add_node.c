#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a liked list
 *@head:duplicate  pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dupp;
	int lenn;
	list_t *neww;

	neww = malloc(sizeof(list_t));
	if (neww == NULL)
		return (NULL);

	dupp = strdup(str);
	if (dupp == NULL)
	{
		free(neww);
		return (NULL);
	}
	for (lenn = 0; str[lenn];)
		lenn++;

	neww->str = dupp;
	neww->lenn = lenn;
	neww->next = *head;

	*head = neww;

	return (neww);

}

