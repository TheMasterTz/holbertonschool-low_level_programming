#include<stdio.h>
/**
 * main - prints # of args
 * @argc: int
 * @argv: char*
 * Return: Always 0
 */
int main (int argc, char *argv[])
{
	argc++;
	if (argc >= 0)
		printf("%s\n", argc - 1);

	return (0);
}
