#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(3, 98, 1024, 690);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 500, -1024);
    printf("%d\n", sum);    
    return (0);
}
