#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Determines either great than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
	printf("Last digit of %d is", n);
	}
	else if (l < 6 && l !=0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else if (l == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}