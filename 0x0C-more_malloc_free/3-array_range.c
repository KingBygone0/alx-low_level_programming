#include "main.h"
/**
 * array_range - array
 * @min: minimunm
 * @max: maximum
 * Return: pointer
 **/
int *array_range(int min, int max)
{
	int *pointer = NULL;
	int i;

	if (min > max)
		return (NULL);
	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer != NULL)
	{
		for (i = 0; (i <= (max - min + 1)) || (min <= max); i++, min++)
			*(pointer + i) = min;
		return (pointer);
	}
	return (NULL);
}
