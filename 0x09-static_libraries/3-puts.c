#include "main.h"
/**
 * _puts - check the code
 *
 *@str: kljkljig
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
		putchar(*str++);
	putchar('\n');
}
