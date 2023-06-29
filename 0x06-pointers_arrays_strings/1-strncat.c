#include <main.h>
/**
 * _strncat - prints
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, dest_len = 0;

	while (dest[x++])
		dest_len++;
	for (x = 0; src[x] && x < n; x++)
		dest[dest_len++] = src[x];
	return (dest);
}
