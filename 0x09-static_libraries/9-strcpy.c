#include "main.h"
#include <string.h>
/**
 * _strcpy - prints
 * @dest: The character to print
 * @src: The character to print
 * Return: On success 1 (success)
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strcpy(char *dest, char *src)
{
char *start;

start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
