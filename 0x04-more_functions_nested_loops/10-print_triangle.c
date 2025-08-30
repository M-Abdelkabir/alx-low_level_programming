#include "main.h"
/**
* print_triangle - check the code
*
*@size: jfng
* Return: Always 0.
*/
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
			_putchar(' ');
		for (k = 0; k < i + 1; k++)
			_putchar('#');
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
