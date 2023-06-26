#include "main.h"

/**
 * print_rev - prints
 * @s: The character to print
 * Return: On success 1. (success)
 * On error, -1 is returned, and erro is set appropriately.
 **/
void print_rev(char *s)
{
int i;
int c;

i = 0;
while (s[i] != '\0')
{
i++;
}
for (c = i - 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
