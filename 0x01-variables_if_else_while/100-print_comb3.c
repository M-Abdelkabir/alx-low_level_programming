#include <stdio.h>
/**
 * main - Alphabet with just two putchar
 * Return: Always 0 hhhh
 */

int main(void)
{
	register int i = 0;
	register int j = 0;

	for (; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

