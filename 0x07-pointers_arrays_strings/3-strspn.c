#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;
    
	while (*s)
    {
        for (p = accept; *p; p++)
        {
            if (*s == *p)
            {
                count++;
                break;
            }
        }
        if (*p == '\0')
            break;
        s++;
    }
    return count;
}
