#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int elements_accept;
	int i, j;
	unsigned int resul = 0;
	int flag  = 0;

	for (i = 0; *(accept + i) != '\0'; i++)
		++elements_accept;
	for (i = 0; *(s  + i) != '\0'; i++)
	{
		if (flag == 0)
		{
			flag = 0;
			for (j = 0; *(accept + j) != '\0'; j++)
			{
				if (*(s + i) == *(accept + j))
				{
					resul = resul + 1;
					flag = 0;
					break;
				}
				else
				{
					flag = 1;
				}

			}
		}
		else
		{
			break;
		}
	}
	return (resul);
}
