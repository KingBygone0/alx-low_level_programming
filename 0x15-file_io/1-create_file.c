#include "main.h"
#include <string.h>
/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file (a NULL-terminated string).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		len = write(fd, text_content, strlen(text_content));

	if (len == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
