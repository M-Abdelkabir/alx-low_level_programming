#include "main.h"
/**
 * _memcpy - prints buffer in hexa
 *
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: ojgojepoje
 * Return: Nothing.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c;

	c = n;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	dest -= c;
	return (dest);
}
