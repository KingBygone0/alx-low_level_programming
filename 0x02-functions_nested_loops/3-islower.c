#include "main.h"
/**
 * _islower - Shows 2 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest
 */
int _islower(int c)
{
	int i;
	i = c;

	if (1 >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
