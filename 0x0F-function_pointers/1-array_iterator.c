#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on
 * each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: Pointer to the function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
