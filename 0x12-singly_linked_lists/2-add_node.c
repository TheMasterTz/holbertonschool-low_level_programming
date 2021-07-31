#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t  **head, const char *str)
{
	list_t *new_node;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
		new_node->next = NULL;
	else
		new_node->next = *h;
	new_node->str = strdup(str);
	new_node->len = len(str);
	*h = new_node;
	return (*h);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *c)
{
	int i;
	for (i = 0; *c; c++, i++);
	return (i);
}
