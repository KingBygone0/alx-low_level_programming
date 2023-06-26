#include<stdio.h>
#include "main.h"

/**
 * reset_to_98 - prints
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void reset_to_98(int *n)
{
	int y = *n;

	y = 98;
	*n = y;
}
