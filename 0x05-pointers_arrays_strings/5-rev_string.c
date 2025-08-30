#include "main.h"
/**
 * rev_string - check the code
 *
 *@s: iojhioj
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, len = 0;
	char c = s[0];

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		len--;
		c = s[i];
		s[i] = s[len];
		s[len] = c;
	}
}
