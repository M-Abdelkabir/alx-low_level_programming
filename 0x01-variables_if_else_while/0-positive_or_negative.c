#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - This program will assign a random number to the variable n each time.
 *Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("0 is zero");
	else
		n < 0 ? printf("%d is negative", n) : printf("%d is positive", n);
	printf("\n");
	return (0);
}
