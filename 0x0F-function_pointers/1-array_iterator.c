#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Applies a provided function to each element of an array
 * @array: The array to be iterated over
 * @size: Number of elements in array
 * @action: Pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
