#include <stdio.h>

void tortoiseAndHare(void) __attribute__ ((constructor));

/**
 * tortoiseAndHare - Prints lines before main function is executed.
 * Return: Nothing
 **/
void tortoiseAndHare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
