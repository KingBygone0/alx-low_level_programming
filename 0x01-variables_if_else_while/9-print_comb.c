#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Prints all possible cominations of single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int g = 0, h = 0;

	while (g < 10){
	{
		putchar(g + 'o');
		putchar(',');
		putchar(' ');
		putchar(h + '0');
		h++;
	}
	h = 0;
	g++;
	}
	putchar('\n');
	return (0);
}
