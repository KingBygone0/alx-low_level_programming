#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Scripts that prints the alphabet in lowercase\n
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
