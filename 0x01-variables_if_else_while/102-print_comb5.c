#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int l;
	int m;

for (l = 0; l < 100; l++)
{
for (m = 0; m < 100; m++)
{
if (l < m)
{
putchar(l / 10 + '0');
putchar(l % 10 + '0');
putchar(' ');
putchar(m / 10 + '0');
putchar(m % 10 + '0');
if (m + l != 0 && l < 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
