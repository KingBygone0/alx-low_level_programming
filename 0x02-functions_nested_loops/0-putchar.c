#include "main.h"

/**
 * main - Print _putchar
 * Return: Always 0 (succces)
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(ch[i]);
	_putchar('\n');
	return (0);
}
