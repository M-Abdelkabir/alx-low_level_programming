#include "main.h"
/**
 * _memset - prints buffer in hexa
 *
 * @b:jojrj
 * @n: the address of memory to print
 * @s: the size of the memory to print
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c;

	c = n;
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	s -= c;
	return (s);
}
