#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
*main - A program that prints the Alphabets in lowercase
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char lc;    
for (lc = 'a'; lc <= 'z'; lc++)
{
_putchar(lc);
}   
_putchar('\n');
}
