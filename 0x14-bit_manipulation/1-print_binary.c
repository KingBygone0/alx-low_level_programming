#include "main.h"

/**
 * print_binary - print binary form of a number
 * @n: decimal to convert
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;

	x = n;
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		print_binary(n >> 1);
		x = x & 1;
		_putchar(x + '0');
	}
}
