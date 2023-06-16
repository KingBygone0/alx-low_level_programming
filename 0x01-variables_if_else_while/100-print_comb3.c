#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int t;
	int h;

	for (t = 0; t < 10; t++)
	{
		for (h = 0; h < 10; h++)
		{
			if (t < h)
			{
				putchar(t % 10 + '0');
				putchar(h % 10 + '0');
				if (h + t != 0 && t < 8)
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
