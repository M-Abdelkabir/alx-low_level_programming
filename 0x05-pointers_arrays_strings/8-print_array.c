#include "main.h"

/**
 * print_array - check the code for
 *
 *@a: gijt
 *@n: gijutj
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != n - 1)
			printf("%i, ", *a);
		else
			printf("%i", *a);
		a++;
	}
	putchar('\n');
}
