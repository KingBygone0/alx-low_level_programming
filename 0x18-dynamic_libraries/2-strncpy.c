#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - prints
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strncpy(char *dest, char *src, int n)
{
int y = 0, src_len = 0;

while (src[y++])
src_len++;
for (y = 0; src[y] && y < n; y++)
dest[y] = src[y];
for (y = src_len; y < n; y++)
dest[y] = '\0';
return (dest);
}
