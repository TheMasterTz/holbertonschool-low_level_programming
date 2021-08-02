#include "lists.h"
/**
 * add_nodeint - add a node in the beginning
 * @head: listint_t **
 * @n: const int
 *
 * Return: listint_t *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodo;
	int i = 0;

	new_nodo = malloc(sizeof(listint_t));

	if (new_nodo == NULL)
		return (NULL);

	new_nodo->n = n;
	new_nodo->next = (*head);
	(*head) = new_nodo;

	return (*head);
}
