#include "main.h"

/**
 * _strspn- check the code
 *
 *@s: kgnejiogjerio
 *@accept: mjtiohj
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int b = 0, k;

	while (*s != '\0')
	{
		k = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				b++;
				break;
			}
			accept++;
			k++;
		}
		if (*accept == '\0')
			return (b);
		accept -= k;
		s++;
	}
	return (b);
}
