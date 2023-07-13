#include "main.h"

int calc_sqrt_recursion(int a, int b);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Variable
 * Return: Natural Squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calc_sqrt_recursion(n, 0));
}

/**
 * calc_sqrt_recursion - A function that recurses to find the natural
 * square root of a number
 * @a: Parameter1
 * @b: Parameter2
 * Return: the resulting square root
 */

int calc_sqrt_recursion(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (calc_sqrt_recursion(a, b + 1));
}
