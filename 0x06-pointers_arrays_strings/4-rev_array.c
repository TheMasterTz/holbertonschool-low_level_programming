#include "holberton.h"
/**
 * reverse_array - reverses array
 * @a:int
 * @n:int
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
    int x;

    x = n - 1;
    
	while (a[x])
	{
		printf("%d", a[x]);
		printf(", ");
		x--;

		if (x == 0)
	        {
			printf("%d", 0);
		}
	}
	printf("\n");
}
