#include "main.h"

/**
 * create_file - creates a file
 * @filename:  is the name of the file to create
 * @text_content: string to be written to the new file
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	int count = 0;

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0600);
	if ((fd == -1) | (filename == NULL))
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[count])
	{
		count++;
	}
	wr = write(fd, text_content, count);
	if (wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
