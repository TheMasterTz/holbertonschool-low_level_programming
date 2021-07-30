#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: The original linked list
 * @str: The string to add to the node
 *
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;

	if (head != NULL && str != NULL)
	{
		list = malloc(sizeof(list_t));
		if (list == NULL)
			return (NULL);

		list->str = strdup(str);
		list->len = _strlen(str);
		list->next = *head;

		*head = list;

		return (list);
	}
}
/**
 * _strlen - Returns the length of a string
 * @c: String to count
 *
 * Return: String length
 */
int _strlen(const char *c)
{
	int i;
	for (i = 0; *c; c++, i++);
	return (i);
}
