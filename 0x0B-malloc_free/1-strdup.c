#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *pointer1;
	unsigned int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*(str + j) != '\0')
			j++;
		pointer1 = (char *)malloc((j + 1) * sizeof(*pointer1));
		if (pointer1 != NULL)
		{
			for (i = 0; i < j; i++)
				*(pointer1 + i) = *(str + i);
			*(pointer1 + (i + 1)) = '\0';
			return (pointer1);
		}
		else
		{
			return (NULL);
		}
	}
}
