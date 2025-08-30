#include "main.h"
/**
 * _strpbrk - check the code
 *
 *@accept: gnjhher
 *@s: jvjh
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return ('\0');
}
