#include "main.h"

/**
 * print_diagsums - sum diagonals
 * @a: Pointer to cube matrice
 * @size: Size of cube matrice
 */
void print_diagsums(int *a, int size)
{
	int left = 0, right = 0, i;

	for(i = 0; i < size; i++)
	{
		left += *(a + i * (size + 1));
		right += *(a + (i + 1) * (size - 1));
	}
	printf("%d, %d\n", left, right);
}
