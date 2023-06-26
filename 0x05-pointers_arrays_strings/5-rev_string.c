#include "main.h"
#include <stdlib.h>
/**
 * rev_string - prints
 * @s: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void rev_string(char *s)
{
int i;
int large;
char *cadena;

i = 0;
while (s[i] != '\0')
{
i++;
}
large = i;
cadena = (char *) malloc(large * sizeof(char));
for (i = 0; i <= large; i++)
{
cadena[i] = (char) *(s + i);
}
for (i = 0; i <= large; i++)
{
*(s + i) = cadena[large - i - 1];
}
}
