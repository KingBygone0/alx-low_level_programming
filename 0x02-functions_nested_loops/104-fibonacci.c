#include <stdio.h>
#include "main.h"
/**
 * main - Prints the add of the eve-valued
 * fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n1, n2, fn, afn;

	n1 = 1;
	n2 = 2;
	fn = afn = 0;
	while (n1 <= 4000000)
	{
		if ((n1 % 2) == 0)
		{
			afn += n1;
		}
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
	}
	printf("%ld\n", afn);
	return (0);
}
