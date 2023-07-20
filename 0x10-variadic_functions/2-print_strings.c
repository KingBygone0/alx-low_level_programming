#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print all the strings
 * @n: amount arguments
 * @...: arguments
 * @separator: symbol that separates the strings
 * Return: nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *argument;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		argument = va_arg(args, char *);
		if (argument == '\0')
			printf("(nil)");
		else
			printf("%s", argument);
		if (i < (n - 1))
			if (separator != '\0')
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
