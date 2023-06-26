#include "main.h"
#include <stdio.h>

/**
 * print_array - prints
 * @a: The character to print
 * @n: The character to print
 * Return: On success 1. (success)
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_array(int *a, int n)
{
int i;

for (i = 0; i <= n - 1; i++)
{
printf("%d", *(a + i));
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
