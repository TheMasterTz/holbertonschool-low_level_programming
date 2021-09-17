#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning
 * of a doubly linked list
 * @head: The head of the doubly linked list
 * @n: The number to place in the new node
 *
 * Return: The new head of the doubly linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Newnode = NULL;

	Newnode = malloc(sizeof(dlistint_t));
	if (Newnode == NULL)
		return (NULL);

	Newnode->n = n;
	if (*head != NULL)
	{
		Newnode->next = *head;
		Newnode->prev = (*head)->prev;
		(*head)->prev = Newnode;
		*head = Newnode;
		return (*head);
	}
	Newnode->next = *head;
	Newnode->prev = NULL;
	*head = Newnode;
	return (*head);
}