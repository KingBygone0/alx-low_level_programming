#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a, b;

for (a = 0; a <= 9; a++)
{
for (b = 97; b <= 122; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
