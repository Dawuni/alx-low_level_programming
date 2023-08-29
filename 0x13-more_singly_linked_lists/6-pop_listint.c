#include "lists.h"

/**
*pop_listint - deletes the head node of a list
*@head: head of the linked list
*
*Return: the deleted node
*/

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int cont;

	if (*head == NULL)
	return (0);

	pop = *head;
	cont = pop->n;
	free(pop);

	*head = (*head)->next;
	return (cont);

}
