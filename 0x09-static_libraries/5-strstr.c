#include "main.h"
#include <stdio.h>

/**
 *_strstr - check the code
 *
 *@haystack: jgjrj
 *@needle: knkjn
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
