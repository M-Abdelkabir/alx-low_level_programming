#include "main.h"
/**
 * string_toupper - check the code
 *
 * @a: an array of integers
 *
 * Return: nothing.
 */
char *string_toupper(char *a)
{
	int n = 0;

	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
			*a += 'A' - 'a';
		a++;
		n++;
	}
	while (n > 0)
	{
		a--;
		n--;
	}
	return (a);
}
