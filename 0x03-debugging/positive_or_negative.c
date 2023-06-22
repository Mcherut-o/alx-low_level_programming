#include "main.h"
/**
*main - A function that checks whether a number is negative or positive
*Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
if(i>0)
{
printf("%d is %s\n", i, "positive");
}
else if(i < 0)
{
printf("%d is %s", i, "negative");
}
else
{
printf("%d is %s", i, "zero");
}
return;
}
