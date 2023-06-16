#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Description: Print possible different combinations of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y, z;


	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x < y && y < z)
				{
					purchar(x % 10 + '0');
					purchar(y % 10 + '0');
					purchar(z % 10 + '0');
					if (y + x + z != 0 && x < 7)
					{
						putchar(',');
						purchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
