#include "lists.h"
/**
 * free_dlistint - Free a doubly linked list
 * @head: The head of the doubly linked list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *tmp = NULL;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}