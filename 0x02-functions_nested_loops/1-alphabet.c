#include "main.h"
/**
 * main - check the code
 * Description: a function to print alphabet in lowercase
 * Return: Always 0. (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
