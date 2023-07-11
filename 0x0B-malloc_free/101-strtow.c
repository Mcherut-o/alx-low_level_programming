#include <stdlib.h>
#include "main.h"

/**
 * count_word - Function counting number of words in string
 * @n: String that is to be evaluated
 * Return: Number of words counted
 */
int count_word(char *n)
{
	int f, g, h;

	f = 0;
	h = 0;

	for (g = 0; n[g] != '\0'; g++)
	{
		if (n[g] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			h++;
		}
	}

	return (h);
}
/**
 * **strtow - Splits  string to words
 * @str: String to be splitted
 * Return: A pointer to an array of strings (Words)
 *       : NULL
 */
char **strtow(char *str)
{
	char **mon, *tsd;
	int i, m = 0, lenth = 0, wrds, j = 0, strt, end;

	while (*(str + lenth))
		lenth++;
	wrds = count_word(str);
	if (wrds == 0)
		return (NULL);

	mon = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (mon == NULL)
		return (NULL);

	for (i = 0; i <= lenth; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tsd = (char *) malloc(sizeof(char) * (j + 1));
				if (tsd == NULL)
					return (NULL);
				while (strt < end)
					*tsd++ = str[strt++];
				*tsd = '\0';
				mon[m] = tsd - j;
				m++;
				j = 0;
			}
		}
		else if (j++ == 0)
			strt = i;
	}

	mon[m] = NULL;

	return (mon);
}
