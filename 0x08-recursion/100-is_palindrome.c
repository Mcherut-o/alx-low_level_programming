#include "main.h"

/**
 * charc_ch - A function that checks for a palindrome
 * @c: String to be checked
 * @a: Iterator variable
 * @b: Length of string
 * Return: 1 if palindrome, 0 if not
 */

int charc_ch(char *c, int a, int b)
{
	if (*(c + a) != *(c + b - 1))
		return (0);
	if (a >= b)
		return (1);
	return (charc_ch(c, a + 1, b - 1));
}

/**
 * _strlen_recursion - A function returning length of string
 * @s: String
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - A function checking whether a string is a palindrome or not
 * @s: String
 * Return: 1 if string is a palindrome
 *       : 0 if  not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (charc_ch(s, 0, _strlen_recursion(s)));
}
