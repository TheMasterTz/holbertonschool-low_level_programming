#include "lists.h"
/**
 * print_dlistint - print all list elements
 * @h: pointer to head
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}
	return (length);
}
