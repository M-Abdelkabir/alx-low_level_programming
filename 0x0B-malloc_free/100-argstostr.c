#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *leng - check the code for ALX School students.
 *
 *@s: hjbieh
 * Return: Always 0.
 */
int leng(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}
/**
  *argstostr - nhtjhiot
  *
  *@ac: mnlj
  *@av: lknjer
  *Return: jmhjj5jy
  */
char *argstostr(int ac, char **av)
{
	int i = 0, k = 0, l = 0, j = 0;
	char *s;

	for (; i < ac; i++, k++)
		k += leng(av[i]);
	s = malloc(sizeof(char) * k + 1);
	if (s == 0 || k == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, l++)
			s[l] = av[i][j];
		s[l] = '\n';
		l++;
	}
	return (s);
}
