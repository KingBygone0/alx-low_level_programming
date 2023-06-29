#include "main.h"
/**
 * leet - Encodes a string to 1337
 * @str:: The string to be encoded
 *
 * Return: A pointer to the encoded string.
 **/
char *leet(char *str)
{
int alpha1 = 0, alpha2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[alpha1])
{
for (alpha2 = 0; alpha2 <= 7; alpha2++)
{
if (str[alpha1] == leet[alpha2] ||
str[alpha1] - 32 == leet[alpha2])
str[alpha1] = alpha2 + '0';
}
alpha1++;
}
return (str);
}
