#include "main.h"

/**
 * print_times_table - prints the times table with a given parameter
 * @n: parameter for times table
 *
 * Return: returns nothing
 */
void print_times_table(int n)
{
int i, j, k;

if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = j * i;
if (j != 0)
{
_putchar(',');
_putchar(' ');
if (k < 100)
_putchar(' ');
if (k < 10)
_putchar(' ');
}
if (k >= 100)
_putchar((k / 100) + '0');
if (k >= 10)
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0');
}
_putchar('\n');
}
}
