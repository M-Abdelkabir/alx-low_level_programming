#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: jijioh
 * @action: bg
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size;

	if (array && size && action)
		while (array < end)
			action(*array++);
}
