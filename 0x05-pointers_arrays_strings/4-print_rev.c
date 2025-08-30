#include "main.h"
/**
 * print_rev - check the code
 *
 *@s: khjijitj
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
