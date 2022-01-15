#include "search_algos.h"

void print_list(int *array, size_t size)
{
	size_t iter;

	printf("Searching in array:");
	for (iter = 0; iter < size; iter++)
	{
		printf(" %d", array[iter]);
		if (iter != size - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}

int binary_search(int *array, size_t size, int value)
{
	size_t L, R, m;

	if (array != NULL && size > 0)
	{
		L = 0;
		R = size - 1;
		print_list(array + L, R + 1 - L);
		while (L < R)
		{
			m = (L + R) / 2;
			if (array[m] < value)
				L = m + 1;
			else if (array[m] > value)
				R = m;
			else
				return (m);
			print_list(array + 1, R + 1 - L);
		}
	}
	return (-1);
}
