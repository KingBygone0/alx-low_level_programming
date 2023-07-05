/**File: 6-is_prime_number.c
Auth: Isaac Annor
*/
#include "main.h"

/**
 * _proceso - Return if the input is a prime number
 * @i: root to check of the number
 * @n: number
 * Return: 0 or 1
 */

int _proceso(int i, int n)
{
	if (n == 2)
		return (2);
	if (n % 2 == 0)
		return (0);
	if ((n % i == 0) && (n != i))
		return (0);
	if ((n % i == 0) && (n == i))
		return (1);
	return (_proceso(i + 1, n));
}

#include "main.h"

/**
 * is_prime_number - Return if the input is a prime number
 * @n: Number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_proceso(2, n));
}
