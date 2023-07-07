#include "main.h"
#include <string.h>

/**
 * _strcat - prints
 * @dest: The character to print
 * @src: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strcat(char *dest, char *src)
{
int count_dest, count_src;

for (count_dest = 0; *(dest + count_dest) != '\0'; )
count_dest++;
for (count_src = 0; *(src + count_src) != '\0'; count_src++)
{
*(dest + count_dest) = *(src + count_src);
count_dest++;
}
*(dest + count_dest++) = '\0';
return (dest);
}
