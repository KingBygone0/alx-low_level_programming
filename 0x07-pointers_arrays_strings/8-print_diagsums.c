#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int resul1 = 0;
	int resul2 = 0;

	for (i = 0; i <= size - 1; i++)
	{
		for (j = 0; j <= size - 1; j++)
		{
			if (i == j)
			{
				resul1 += *(a + (((size - 1) * i) + (i + j)));
			}
			if ((i + j) == (size - 1))
			{
				resul2 += *(a + (((size - 1) * i) + (size - 1)));
			}
		}
	}
	printf("%d, %d\n", resul1, resul2);
}
