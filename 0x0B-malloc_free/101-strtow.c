#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *wcont - vlf,r
  *
  *@s: pogkh
  *Return: okhkt
  */
int wcont(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 * strtow - Prints an array of string
 *
 * @str: The array to print
 * Return: nothing
 */
char **strtow(char *str)
{
	int i = 0, j, k = 0, l, m, n;
	char **o;

	n = wcont(str);
	if (n == 1)
		return (NULL);
	o = (char **)malloc(sizeof(char *) * n);
	if (o == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0  || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			o[k] = (char *)malloc(sizeof(char) * (j + 1));
			if (o[k] == NULL)
			{
				for (m = 0; m < k; m++)
					free(o[m]);
				free(o[n - 1]);
				free(o);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				o[k][l] = str[i + l];
			k++;
			i += j;
		}
		else
			i++;
	}
	return (o);
}
