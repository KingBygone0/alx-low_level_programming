#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int results, num;

	if (!b || !*b)
		return (0);
	results = num = 0;
	while (b[num])
	{
		if (b[num] > 49)
			return (0);
		else if (b[num] == 49)
		{
			results <<= 1;
			results += 1;
		}
		else
			results <<= 1;
		num++;
	}
	return (results);
}
