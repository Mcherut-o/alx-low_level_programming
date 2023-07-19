#include "main.h"
#include <stdlib.h>

int Lengthofstr(char *s);
/**
 *string_nconcat - A function that concatenates 2 strings
 *@s1:String number 1
 *@s2: String number 2
 *@n: First bytes of s2
 *Return: A pointer Pointing to newly allocated space in memory
 *      : If it fails,NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int lstr, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lstr = (unsigned int) Lengthofstr(s1);
	pt = malloc((lstr + n + 1) * sizeof(char));
	if (pt == NULL)
		return (NULL);
	for (a = 0, b = 0; a < (lstr + n); a++)
	{
		if (a < lstr)
			pt[a] = s1[a];
		else
			pt[a] = s2[b++];
	}
	pt[a] = '\0';

	return (pt);
}

/**
 * Lengthofstr - Finds length of string
 * @s: string variable
 * Return: String length
 */

int Lengthofstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
