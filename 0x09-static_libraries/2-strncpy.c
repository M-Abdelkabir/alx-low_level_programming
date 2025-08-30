#include "main.h"
/**
 * *_strncpy - check the code
 *
 *@dest: ugh34iu
 *@src: mgoj
 *@n: ghiu54h
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
		dest++;
	}
	while (i > 0)
	{
		dest--;
		i--;
	}
	return (dest);
}
