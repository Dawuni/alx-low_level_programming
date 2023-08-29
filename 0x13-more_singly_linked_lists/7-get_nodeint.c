#include "lists.h"

/**
*get_nodeint_at_index - return the nth node of the linked list
*@head: pointer to the head of a linked list
*@index: index of the node to be assigned
*
*Return: the address of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pointer = NULL;
	unsigned int x = 0;

	while (head != NULL)
	{
		if (x <= index)
		{
			if (x == index)
			{
				pointer =  head;
				break;
			}
			head = head->next;
			x++;
		}
		else
		return (NULL);
	}
	return (pointer);
}
