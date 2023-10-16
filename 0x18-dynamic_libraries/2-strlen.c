#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * _strlen - prints
 * @s: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _strlen(char *s)
{
char *p;

p = s;
while (*p)
++p;
return (p - s);
}
