#include "lists.h"
/**
 * dlistint_t *insert_dnodeint_at_index - insert node in given position
 * @head: double pointer
 * @idx: index
 * @n: value of nodes
 *
 * Return: the address of the new node created, od NULL if it failed.
 */
 dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
 {
	dlistint_t *current = NULL, *Newnodo = NULL;
	unsigned int length = 0, i = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL)
	{
		if (i == idx)
		{
			Newnodo = createNode(n, current, current->prev);
			current->prev = Newnodo;
			current = Newnodo;
			current->prev->next = Newnodo;
			return (Newnodo);
		}
		current = current->next;
		++i;
	}
	return (current);
}
/**
 * print_dlistint - print all list elements
 * @h: pointer to head
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length;

	for (length = 0; h != NULL; length++)
	{
		h = h->next;
	}
	return (length);
}
/**
 * createNode - create a new node with values
 * @n: the number of the new node
 * @next: the next node of the new node
 * @prev: the previous node of the new node
 *
 * Return: the address of the new node created
 */
dlistint_t *createNode(unsigned int n, void *next, void *prev)
{
	dlistint_t *Newnodo = malloc(sizeof(dlistint_t));
	if (Newnodo == NULL)
		return (NULL);
	
	Newnodo->n = n;
	Newnodo->next = next;
	Newnodo->prev = prev;
	return (Newnodo);
}
