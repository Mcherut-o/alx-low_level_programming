#include "main.h"

/**
 *_memcpy -A functio copying memory area
 *@dest: Address where memory value is stored
 *@src: Address memory where value will be copied
 *@n: The number of bytes
 *Return: Memory copied by fxn
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int arr1;
	int i = n;

	for (arr1 = 0; arr1< i; arr1++)
	{
		dest[arr1] = src[arr1];
		n--;
	}
	return (dest);
}
