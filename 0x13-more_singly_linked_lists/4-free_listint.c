#include "lists.h"
/**
 * free_listint - free memory allocated with malloc
 * @head: pointer of kind listint_t, is the head of list
 * Return - Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
