#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd,  wr;
	int count = 0;

	fd = open(filename, O_RDWR | O_APPEND);
	if ((filename == NULL) || (fd == -1))
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
