#include "lists.h"
/**
 * free_list - liberar memoria
 * @head: listint_t *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
