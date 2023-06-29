#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_array - prints
 * @a: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void reverse_array(int *a, int n)
{
int *accept;
int i;

accept = (int *) malloc(n * sizeof(int));
for (i = 0; i < n ; i++)
{
*(accept + i) = *(a + i);
}
for (i = 0; i < n; i++)
{
*(a + i) = *(accept + (n - i - 1));
}
}
