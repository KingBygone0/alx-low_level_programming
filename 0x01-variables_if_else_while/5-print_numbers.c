#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print all single digit of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}
	putchar('\n');
	return (0);
}
