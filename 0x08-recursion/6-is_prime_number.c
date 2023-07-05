/**
 * File: 6-is_prime_number.c
 * Auth: Isaac Annor
*/
#include "main.h"

/**
 * finddiv - sqr
 *
 * @n: n
 * @i: i
 *
 * Return: sqr root
 *
 */

int finddiv(int n, int i)
{
	if (n % i == 0)
		return (i);

	else
		return (finddiv(n, ++i));

	return (0);
}

/**
 * is_prime_number - sqr
 *
 * @n: n
 *
 * Return: sqr root
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else if ((finddiv(n, 2)) == n)
		return (1);

	else
		return (0);

	return (0);
}
