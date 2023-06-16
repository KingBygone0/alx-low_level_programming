#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print all possible cominations of single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
