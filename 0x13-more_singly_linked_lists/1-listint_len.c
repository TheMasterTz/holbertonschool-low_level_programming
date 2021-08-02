#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int iter = 0;

	while (h)
	{
		h = h->next;
		iter++;
	}
	return (iter);
}
