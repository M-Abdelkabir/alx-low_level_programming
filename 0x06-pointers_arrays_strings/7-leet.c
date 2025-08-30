#include "main.h"
/**
 *leet- check the co<de for
 *
 *@a: jjiojifdb
 * Return: Always 0.
 */
char *leet(char *a)
{
	int n;
	char *s = "aAeEoOtTlL";
	char *c = "4433007711";

	while (*a != '\0')
	{
		while (*s != '\0')
		{
			if (*a == *s)
				*a = *c;
			s++;
			c++;
		}
		a++;
		c -= 10;
		s -= 10;
		n++;
	}
	a -= n;
	return (a);
}
