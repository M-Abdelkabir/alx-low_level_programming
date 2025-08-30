#include "main.h"

/**
 * _strcat - check the code
 *
 *@dest: kohkotk
 *@src: kljhrj
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (*dest != '\0')
	{
		dest++;
		j++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		j++;
	}
	*dest = '\0';
	for (i = 0; i < j; i++)
		dest--;
	return (dest);
}
