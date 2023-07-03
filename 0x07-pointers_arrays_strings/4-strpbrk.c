#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i_first = 0;
	int j_second = 0;
	char *pointer1 = '\0';

	while (s[i_first])
	{
		j_second = 0;
		while (accept[j_second])
		{
			if (s[i_first] == accept[j_second])
			{
				pointer1 = &s[i_first];
				break;
			}
			j_second++;
		}
		if (pointer1 != '\0')
			break;
		i_first++;
	}
	return (pointer1);
}
