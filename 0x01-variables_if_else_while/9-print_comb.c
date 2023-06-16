#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Prints all possible cominations of single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
	if (q != 0)
	{
	putchar(',');
	putchar(' ');
	}
	putchar(q % 10 + '0');
	}
	putchar('\n');
	return (0);
}
