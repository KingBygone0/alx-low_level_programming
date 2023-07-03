#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	char *pointer;

	pointer = s;
	while (*pointer != '\0')
	{
		if (pointer == NULL)
			return (NULL);
		else if (*pointer == c)
			return (pointer);
		pointer++;
	}
	if (*pointer == c)
		return (pointer);
	else
		return (NULL);
}
