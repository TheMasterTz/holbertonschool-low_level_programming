#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *Newnode = NULL, *current = NULL;

	Newnode = malloc(sizeof(dlistint_t));
	if (Newnode == NULL)
		return (NULL);

	Newnode->n = n;
	if (*head != NULL)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		Newnode->next = NULL;
		Newnode->prev = current;
		current->next = Newnode;
		return (Newnode);
	}
	Newnode->next = *head;
	Newnode->prev = NULL;
	*head = Newnode;
	return (*head);
}