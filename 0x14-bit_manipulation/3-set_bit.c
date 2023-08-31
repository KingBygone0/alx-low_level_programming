#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to a number
 * @index: index of the bit to set
 *
 * Return: 1 (Success) else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
