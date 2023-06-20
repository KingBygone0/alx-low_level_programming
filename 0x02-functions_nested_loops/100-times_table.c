#include "main.h"
/**
 * print_times_table - print times table up to input
 *
 * Description: Writes times table up to imput not exceeding 15
 * @n: size of times table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int j, i, resul;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				resul = j * i;
				if (j == 0)
					_putchar(resul + 48);
				if (j > 0)
				{
					_putchar(',');
					if (resul < 10)
					{
						print_spaces(3);
						_putchar(resul + 48);
					}
					if (resul < 100 && resul >= 10)
						divide_10(resul);
					if (resul < 1000 && resul >= 100)
						divide_100(resul);
					if (resul < 10000 && resul >= 1000)
						divide_1000(resul);
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * print_spaces - print spaces
 * @amount: amount spaces
 * Return: nothing
 **/
void print_spaces(int amount)
{
	int i;

	for (i = 0; i < amount; i++)
		_putchar(' ');
}

/**
 * divide_1000 - print 4 digits numbers
 * @resul: number
 * Return: nothing
 **/
void divide_1000(int resul)
{
	_putchar((resul / 1000) + 48);
	_putchar(((resul % 1000) / 100) + 48);
	_putchar((((resul % 1000) % 100) / 10) + 48);
	_putchar((((resul % 1000) % 100) % 10) + 48);

}

/**
 * divide_100 - print 3 digits numbers
 * @resul: number
 * Return: nothing
 **/
void divide_100(int resul)
{
	print_spaces(1);
	_putchar((resul / 100) + 48);
	_putchar(((resul % 100) / 10) + 48);
	_putchar(((resul % 100) % 10) + 48);
}

/**
 * divide_10 - print 2 digits numbers
 * @resul: number
 * Return: nothing
 **/
void divide_10(int resul)
{
	print_spaces(2);
	_putchar((resul / 10) + 48);
	_putchar((resul % 10) + 48);
}
.
