#include "main.h"
/**
 * puts_half - prints
 * @str: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void puts_half(char *str)
{
int i;
int n;

i = 0;
while ((*(str + i)) != '\0')
++i;
if (i % 2 != 0)
n = (i / 2) + 1;
else
n = i / 2;
while ((*(str + n)) != '\0')
{
_putchar((*(str + n)));
n++;
}
_putchar('\n');
}
