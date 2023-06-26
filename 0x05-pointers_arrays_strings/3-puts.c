#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * _puts - prints
 * @str: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void _puts(char *str)
{
	char *strputs;
	int i;

	strputs = str;
	i = 0;
	while (strputs[i] != '\0')
	{
		_putchar(strputs[i]);
		++i;
	}
	_putchar('\n');
}
