#include "main.h"

/**
 * puts_half - check the code
 *
 *@str: jbiojiohj
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j, n = 0;

	while (*str != '\0')
	{
		n++;
		str++;
	}
	str -= n;
	if (n % 2 != 0)
		j = (n + 1) / 2;
	else
		j = n / 2;
	for (i = 0; i < n; i++)
	{
		if (i >= j)
			putchar(*str);
		str++;
	}
	putchar('\n');
}
