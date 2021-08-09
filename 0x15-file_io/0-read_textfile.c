#include "main.h"

/**
 * read_textfile - ...
 * @filename: The source file
 * @letters: Number of letters to reads and prints
 *
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buf = malloc(sizeof(char *) * letters);

	if (!buf | !filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, readed);

	free(buf);
	close(fd);
	return (readed);
}
