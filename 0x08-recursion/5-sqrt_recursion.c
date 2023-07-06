/*
 * File:5-sqrt_recursion.c
 * Auth:Isaac Annor
 */

int _getsq(int, int);

/**
 * _sqrt_recursion - root square
 * @n: number to find the square root
 * Return: -1 if a * a != n
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
	{
		return (_getsq(n, 1));
	}
	return (-1);
}
/**
 *_getsq - do operations
 *@n: number
 *@a: base
 *Return: -1 if a * a != n
 **/
int _getsq(int n, int a)
{
	if ((a * a) == n)
		return (a);
	if ((a * a) < n)
		return (_getsq(n, (a + 1)));
	if ((a * a) > n)
		return (-1);
	return (-1);
}
