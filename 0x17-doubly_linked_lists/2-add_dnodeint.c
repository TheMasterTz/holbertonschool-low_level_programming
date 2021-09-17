#include "lists.h"
/**
 * print_dlistint - print all list elements
 * @head: double pointer
 * @n: new number to set a new node
 * Return: Always EXIT_SUCCESS.
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