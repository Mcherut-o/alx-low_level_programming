#include "main.h"

/**
*print_array -A function that prints n elements of an array of integers
*@n: Stores values
*@a:Pointer
* Return: Always 0 (Success)
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d", a[i]);
printf(",");
printf(" ");
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
printf("\n");
}
}
