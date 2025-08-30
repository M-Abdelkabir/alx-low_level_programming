#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_memset - mnbni
  *
  *@s: mkhm
  *@b: ,kmhm
  *@n: mojmihj6
  *Return: okmihjj
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == NULL)
		return (NULL);
	free(m);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
