#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - check the code for ALX School students.
 *
 *@s1: koemgmtm
 *@s2: klmmr
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, r = 0, j = 0, k = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[r] != '\0')
			r++;
	}
	s = malloc(sizeof(char) * (r + i + 1));
	if (s == NULL)
		return (NULL);
	if (i != 0)
	{
		for (j = 0; s1[j] != '\0'; j++)
			s[j] = s1[j];
	}
	if (r != 0)
	{
		for (k = 0; s2[k] != '\0'; k++, j++)
			s[j] = s2[k];
	}
	s[j] = '\0';
	return (s);
}
