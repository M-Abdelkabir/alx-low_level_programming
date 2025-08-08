#include <stdio.h>
/**
 * main - Alphabet with just two putchar
 * Return: Always 0 hhhh
 */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}

