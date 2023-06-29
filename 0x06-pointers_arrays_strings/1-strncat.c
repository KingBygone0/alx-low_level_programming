#include <main.h>
#include <string.h>

/**
 * _strncat - prints
 * @dest: the character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1 (Always)
 * on error, -1 is returned, and errno is set appropriately.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count_dest, count_src;

	for (count_dest = 0; *(dest + count_dest) != '\0'; )
		count_dest++;
	for (count_src = 0; count_src <= n - 1; count_src++)
	{
		*(dest + count_dest) = *(src + count_src);
		count_dest++;
	}
	*(dest + count_dest++) = '\0';
	return (dest);
}
