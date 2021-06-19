#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int q = 48;
	int w = 49;

	while (q < 58)
	{
		putchar(q);
		putchar(w);

		if (q == 56 && w == 57)
		{
			putchar('\n');
			q++;
			w++;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (w < 57)
		{
			w++;
		}
		else
		{
			q++;
			w = q + 1;
		}
	}

	return (0);
}
