#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - executes a function on each element of arr
 * @array: the arr
 * @size: size of array?
 * @action: the function to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t i;

	if (array != '\0' && action != '\0')
		for (i = 0; i < size; i++)
			action(array[i]);

}
