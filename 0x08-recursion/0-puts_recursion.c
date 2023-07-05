/**
 * file:0-puts_recursion.c
 * Auth: Isaac
 */

#include "main.h"

/**
 *Description: _puts_recursion - prints a string, followed by a new line.
 * @s: The string to be printed
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
