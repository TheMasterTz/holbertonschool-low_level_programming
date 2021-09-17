#include "lists.h"
/**
 * print_dlistint - print all list elements
 * @h: pointer to head
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length;

	for (length = 0; h != NULL; length++)
		h = h->next;

	return (length);
}