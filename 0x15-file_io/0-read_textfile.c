#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints a specified number of letters.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, amount_str = 0, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	amount_str = read(fd, buffer, letters);
	if (amount_str == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	count = write(STDOUT_FILENO, buffer, amount_str);
	if (count == -1 || (size_t)count != (size_t)amount_str)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (count);
}
