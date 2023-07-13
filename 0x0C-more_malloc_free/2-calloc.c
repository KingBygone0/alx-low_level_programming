#include "main.h"
/**
 * _calloc - calloc
 * @nmemb: members
 * @size: size
 * Return: pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);
	if (pointer != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
			*(pointer + i) = 0;
		return (pointer);
	}
	if (pointer == NULL)
		return (NULL);
	return (NULL);
}
