/*
 * File: 4-pow_recursion.c
 * Auth: Isaac Annor
 */

#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power.
 *
 * Return: The value of x raised to the power of y.
 */
{
	int resul;

	if (y > 1)
	{
		resul = x *  _pow_recursion(x, y - 1);
		return (resul);
	}
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	else
		return (-1);
}
