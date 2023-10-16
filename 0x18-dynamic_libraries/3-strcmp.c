#include "main.h"

/**
 * _strcmp - prints
 * @s1: The character to print
 * @s2: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _strcmp(char *s1, char *s2)
{
int ike = 0;

while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
ike = *s1 - *s2;
break;
}
s1++;
s2++;
}
return (ike);
}
