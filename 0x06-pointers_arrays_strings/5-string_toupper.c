#include "main.h"

/**
 * string_toupper - changes all lower case to capital letters
 * @str: string to modify
 * Description: changes all lower case letters to capitals
 * Return: char
 **/

char *string_toupper(char *str)
{
int isaac;

for (isaac = 0; str[isaac] != '\0'; isaac++)
{
if (str[isaac] >= 'a' && str[isaac] <= 'z')
str[isaac] -= 32;
}
return (str);
}
