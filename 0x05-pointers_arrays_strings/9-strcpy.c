#include "main.h"

/**
 * *_strcpy - check the code
 *
 *@src: njgjtiuj
 *@dest: jgijj
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*src != '\0' || *dest != '\0')
	{
		if (*src != '\0')
		{
			*dest = *src;
			n++;
			src++;
		} else
			*dest = '\0';
		dest++;
	}
	return (src - n);
}

