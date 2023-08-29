#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of a linked list
 *@head: pointer to the head of a linked list
 *@n: number to be used as const
 *
 *Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;
	listint_t *cursor = *head;

	new_node = malloc(sizeof(listint_t));
	if (add_node != NULL)
	{
		add_node->n = n;
		add_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;

		cursor->next = add_node;
	}
	else
		*head = add_node;
	return (add_node);
}
