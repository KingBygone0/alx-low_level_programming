#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == 1)
		return (-1);
	if (text_content)
		len = write(fd, text_content, strlen(text_content));
	close(fd);
	return (len == -1 ? -1 : 1);
}
