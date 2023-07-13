#include "main.h"
/**
 * malloc_checked - pointer without data type
 * @b: value
 * Return:  pointer
 **/
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer != NULL)
		return (pointer);
	if (pointer == NULL)
		exit(98);
	exit(98);
}
