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
	int fp, amount_str = 0, count;
	void *strings;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY | S_IRUSR);
	if (fp == -1)
		return (0);
	if (fp != -1)
	{
		strings = malloc(letters);
		if (strings == NULL)
			return (0);
		amount_str = read(fp, strings, letters);
		if (amount_str < 0)
		{
			free(strings);
			close(fp);
			return (0);
		}
		count = write(STDOUT_FILENO, strings, amount_str);
		if (count >= 0)
		{
			free(strings);
			close(fp);
			return (count);
		}
		if (count < 0)
		{
			free(strings);
			close(fp);
			return (0);
		}
	}
	free(strings);
	close(fp);
	return (0);
}
