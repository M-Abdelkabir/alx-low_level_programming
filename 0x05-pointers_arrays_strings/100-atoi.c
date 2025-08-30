#include "main.h"
/**
 * _atoi- check the code
 *
 *@s: pkorki
 * Return: Always 0.
 */
int _atoi(char *s)
{
	unsigned int j = 0, i, c = 0, l = 1, k = 1;

	while ((*s < '0' || *s > '9') && (*s != '\0'))
	{
		if (*s == '-')
			k *= -1;
		s++;
	}
	if (*s != '\0')
	{
		while (*s >= '0' && *s <= '9' && *s != '\0')
		{
			j++;
			s++;
		}
		for (i = 0; i < j; i++)
		{
			s--;
			c += (*s - '0') * l;
			l *= 10;
		}
	} else
		c = 0;
	return (k * c);
}
