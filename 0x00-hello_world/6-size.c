#include <stdio.h>
/**
 * main - A  program that prints the size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int d;
float f;
long int g;
long long int h;

printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
