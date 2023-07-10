#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *pointer1, *pointer2, *finalpointer;
	unsigned int i = 0, j = 0, k, w, final;

	if (s1 == NULL)
		pointer1 = "";
	else
		pointer1 = s1;
	if (s2 == NULL)
		pointer2 = "";
	else
		pointer2 = s2;
	for ( ; *(pointer1 + j) != '\0'; )
		j++;
	for ( ; *(pointer2 + i) != '\0'; )
		i++;
	final = i + j + 1;
	finalpointer = (char *)malloc((final) * sizeof(*finalpointer));
	if (finalpointer != NULL)
	{
		for (k = 0; k < j; k++)
			*(finalpointer + k) = *(pointer1 + k);
		for (w = 0; w < i; w++)
			*(finalpointer + (k + w)) = *(pointer2 + w);
		*(finalpointer + (final)) = '\0';
		return (finalpointer);
	}
	if (finalpointer == NULL)
		return (NULL);
	return (NULL);
}
