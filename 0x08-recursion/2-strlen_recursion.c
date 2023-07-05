/*
 * File: 2-strlen_recursion.c
 * Auth: Isaac Annor
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	int increment = 0;

	if (*s != '\0')
	{
		increment++;
		length += increment + _strlen_recursion(s + 1);
		return (length);
	}
	else
	{
		return (0);
	}
}
