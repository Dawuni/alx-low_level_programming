#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of the linked list
 * @head: pointer to the head of the linked list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *added_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int u = 0;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL || idx > listint_len(*head))
	{
		free(added_node);
		return (NULL);
	}
	added_node->n = n;
	added_node->next = NULL;
	while (head != NULL)
	{
		if (u == idx)
		{
			if (u == 0)
			{
				added_node->next = *head;
				*head = added_node;
				return (added_node);
			}
			added_node->next = previous_node->next;
			previous_node->next = added_node;
			return (added_node);
		}
		else if ((u + 1) == idx)
			previous_node = *head;
		head = &((*head)->next);
		u++;
	}
	return (NULL);
}

/**
 * listint_len - counts the number of nodes in a list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
