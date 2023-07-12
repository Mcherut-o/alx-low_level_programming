#include "main.h"

/**
 * _pow_recursion - A function that returns value of x raised to the power of y
 * @x: Variable storing value of x
 * @y: Variable storing value of y
 * Return: Value of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
