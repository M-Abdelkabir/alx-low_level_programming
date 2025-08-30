#include <stdio.h>
/**
 * main - Alphabet with just two putchar
 * Return: Always 0 hhhh
 */

int main(void)
{
	register int i = 0;

	for (; i <= 9; i++){
		putchar('0' + i);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

