#include "function_pointers.h"

/**
 * int_index - Searches for an element in array
 * @array: An array to be searched
 * @size: The size of elements in array
 * @cmp: A pointer to a function
 * Return: Index of the first element
 *       : If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
