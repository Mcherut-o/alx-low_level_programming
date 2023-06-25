#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
int h, m;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
int hintens = h / 10;
int hinones = h % 10;
int mintens = m / 10;
int minones = m % 10;
_putchar(hintens + '0');
_putchar(hinones + '0');
_putchar(':');
_putchar(mintens + '0');
_putchar(minones + '0');
_putchar('\n');
}
}
}
