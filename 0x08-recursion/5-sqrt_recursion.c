/**
 * File: 5-sqrt_recursion.c
 * Auth: Isaac Annor
 */
#include "main.h"

/**
 * _proceso - Return the square root of a number with iterators
 * @i: root to check of the number
 * @n: number
 * Return: -1 or root of n
 */
int _proceso(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_proceso(i + 1, n));
}

#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number..
 * Return: numero.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_proceso(0, n));
}
