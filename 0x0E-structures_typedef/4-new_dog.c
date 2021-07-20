#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *dog;

	if (name == NULL || owner == NULL || age == 0)
		return (NULL);
					
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
							
	for (i = 0; name[i]; i++);

	i++;

	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		dog->name[k] = name[k];
	}

	for (j = 0; owner[j] != '\0'; j++);
												
	j++;

	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j ; k++)
		dog->owner[k] = owner[k];
																
	return (dog);
}
