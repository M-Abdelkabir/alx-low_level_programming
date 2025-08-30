#include "main.h"

/**
 * _strncat - check the code
 *
 *@n: mjiojioje
 *@src: igioer
 *@dest: kjiji
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (*dest != '\0')
	{
		dest++;
		j++;
	}
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	while (k < i + j)
	{
		dest--;
		k++;
	}
	return (dest);
}
