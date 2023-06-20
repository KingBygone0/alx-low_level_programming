#include <stdio.h>
#include "main.h"
/**
 * main - prints sum of even fibonnaci
 * suits elements
 * fibonacci suit members
 * Return: return 0
 */
int main(void)
{
	unsigned long x = 0, y = 1, z = 0;
	unsigned long sum = 0;

	while (z < 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
			sum += z;
	}
	printf("%lu\n", sum);
	return (0);
}
