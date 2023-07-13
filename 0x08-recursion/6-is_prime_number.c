#include "main.h"

int calc_prime(int i, int j);

/**
 * is_prime_number - Function identifying if integer is a prime number or not
 * @n: Variable storing number to be evaluated
 * Return: 1 If n is a prime number
 *       : 0 Otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calc_prime(n, n - 1));
}

/**
 * calc_prime - A function that calcuates if number is prime recursively
 * @i: Variable storing number to be evaluated
 * @j: Iterator variable
 * Return: 1 If n is a prime number
 *       : 0 Otherwise
 */

int calc_prime(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0 && j > 0)
		return (0);
	return (calc_prime(i, j - 1));
}
