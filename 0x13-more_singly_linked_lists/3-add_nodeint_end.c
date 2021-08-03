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
	listint_t *new_node, *copy;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	copy = *head;

	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = new_node;

	return (new_node);
}
