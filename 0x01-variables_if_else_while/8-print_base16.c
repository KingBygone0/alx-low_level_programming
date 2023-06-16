#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = '0'; lowerCase <= '9'; lowerCase++)
	{
		putchar(lowerCase);
	}
	for (lowerCase = 'a'; lowerCase <= 'f'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
