#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *pointer1;
	unsigned int i;

	if (size == 0)
	{
		pointer1 = NULL;
		return (pointer1);
	}
	else
	{
		pointer1 = (char *)malloc(size * sizeof(*pointer1));
		if (pointer1 != NULL)
		{
			for (i = 0; i < size; i++)
				*(pointer1 + i) = c;
	}
		else
		{
			pointer1 = NULL;
			return (pointer1);
		}
	}
	return (pointer1);
}
