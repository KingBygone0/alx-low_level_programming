#include <stdio.h>
#include "main.h"
/**
 * main - prints sum of even fibonnaci
 * suits elements
 * fibonacci suit members
 * Return: return 10
 */
int main(void)
{
	unsigned long x, y, sum;
	z = 0;
	x = 0;
	y = 1;
	whilte (z < 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
			sum +=z;
	}
	printf("%lu\n", sum);
	return (0);
