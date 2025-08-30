#include <stdio.h>
/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	long int k, a, s = 0, n = 1;

	while (k < 4000000)
	{
		k = s + n;
		s = n;
		n = k;
		if (s % 2 == 0)
			a += s;
	}
	printf("%ld\n", a);
	return (0);
}
