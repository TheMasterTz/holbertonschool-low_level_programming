#include "main.h"
/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: ...
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	
	if (text_content)
	{
		while (text_content[count])
		{
			count++;
		}
		write(fd, text_content, count);
	}

	close(fd);
	return (1);
}
