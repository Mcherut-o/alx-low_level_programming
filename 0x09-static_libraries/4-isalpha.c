#include "main.h"

/**
 * _isalpha - A function that checks for alphabets
 * @c - integer variable
 * Return: 1 if c is a letter
 *       : 0, otherwise
 */

int _isalpha(int c)
{
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
