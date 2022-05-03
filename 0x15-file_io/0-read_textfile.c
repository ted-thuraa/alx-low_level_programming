#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output
 * @filename: the text file
 * @letters: number of letters to print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openn, readd, writo;
	char *buf = malloc(sizeof(char) * letters + 1);

	openn = open(filename, O_RDONLY);
	if ((filename == NULL) || (buf == NULL) || (openn == -1))
	{
		free(buf);
		return (0);
	}
	readd = read(openn, buf, letters);
	if (readd == -1)
	{
		
		return (0);
	}
	buf[readd] = '\0';
	writo = write(STDOUT_FILENO, buf, readd);
	if (writo == -1)
	{
		
		return (0);
	}
	close(openn);
	return (writo);
}
