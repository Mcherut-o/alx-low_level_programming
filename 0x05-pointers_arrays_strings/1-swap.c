#include "main.h"

/**
*swap_int - A function  to swap values
*@a:Stores values
*@b:Stores values
*Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
