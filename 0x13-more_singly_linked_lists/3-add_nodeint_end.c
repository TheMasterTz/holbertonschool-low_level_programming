#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: listint_t **
 * @n: const int n
 *
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodo;
	listint_t *head2;

	if (head == NULL)
		return (NULL);

	*new_nodo = malloc(sizeof(listint_t));

	new_nodo->n = n;
	new_nodo->next = NULL;

	if (!*head)
	{
		*head = new_nodo;
		return (new_nodo);
	}

	head2 = *head;

	while (head2->next != NULL)
	{
		head2 = head2->next;
	}

	head2->next = new_nodo;

	return (new_nodo);
}
