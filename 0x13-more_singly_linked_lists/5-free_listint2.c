#include "lists.h"

/**
 * free_listint2 - free listint
 * @head: listint_t **
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *lip;

	if (head != NULL)
		return (NULL);

	while (head)
	{
		lip = (*head)->next;
		free(*head);
		*head = lip;
	}
}
