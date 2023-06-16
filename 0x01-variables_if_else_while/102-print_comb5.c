#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print all possible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int l = 0;
	int m = 0;

	while (l <= 99)
	{
		m = l + 1;
		while (m <= 99)
		{
			putchar(l / 10 + '0');
			putchar(l % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (l != 98 || m != 98)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		l++;
	}
	return (0);
}
