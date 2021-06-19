#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int af;

	for (af = 48; af < 58; af++)
	{
		putchar(af);

		if (af != 57)
		{
			putchar(44);
			putchar(32);
		}

		else if (af == 57)
		{
			af++;
		}

	}
	putchar('\n');

	return (0);
}

