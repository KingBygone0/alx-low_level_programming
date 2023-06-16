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
					putchar(x % 10 + '0');
					putchar(y % 10 + '0');
					putchar(z % 10 + '0');
					if (y + x + z != 0 && x < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
