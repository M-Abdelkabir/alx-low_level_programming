#include <stdio.h>
/**
 * main - Alphabet with just two putchar
 * Return: Always 0 hhhh
 */

int main(void)
{
	char text[] = "\nabcdefghijklmnopqrstuvwxyz";

	register int i = sizeof(text) - 2;

	for (; i >= 0; i--)
		putchar(text[i]);
	return (0);
}

