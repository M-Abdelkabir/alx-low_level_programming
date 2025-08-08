#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - This program will assign a random number to the variable n each time it is executed.
 *Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n < 0 ? printf("%d is negative", n) : n == 0 ? printf("0 is zero") : printf("%d is positive", n);
	printf("\n");
	return (0);
}
