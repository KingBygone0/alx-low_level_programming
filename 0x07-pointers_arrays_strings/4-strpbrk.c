#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
    char *p;
    while (*s)
    {
        for (p = accept; *p; p++)
        {
            if (*s == *p)
                return s;
        }
        s++;
    }
    return NULL;
}
