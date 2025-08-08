#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of a random number
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*printf("n = %d , sign de n  = %d\n", n, n >> 31);*/
	printf("Last digit of %d is", n);
	n < 0 ? n = -1 * n : 1;
	n = (n % 10) ;
	printf(" %d and is ", n);
	if (n == 0)
		printf("0\n");
	else
		n > 5 ? printf("greater than 5\n") : printf("less than 6 and not 0\n");
	return (0);
}
