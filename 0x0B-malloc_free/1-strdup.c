#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- check the code for ALX School students.
 *
 *@str: lmklmr
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		s[r] = str[r];
	return (s);
}
