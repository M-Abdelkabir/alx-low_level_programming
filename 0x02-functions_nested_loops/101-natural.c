#include <stdio.h>
/**
*main - fdijif
*
*Return: jj
*/
int main(void)
{
	int i, s, k = 0;

	for (i = 1; i < 342; i++)
	{
		if (i % 5 != 0)
			k += i * 3;
		s = i * 5;
		if (s < 1024)
			k += s;
	}
	printf("%d\n", k);
	return (0);
}
