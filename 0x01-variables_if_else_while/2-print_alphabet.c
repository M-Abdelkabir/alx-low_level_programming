#include <stdio.h>
/**
 * main - Alphabet with just two putchar
 * Return: Always 0 hhhh
 */

int main(void)
{
	char text[] = "abcdefghijklmnopqrstuvwxyz\n\0";
	int n = sizeof(text);

	register int i = 0;

	for (; i < n; i++)
		putchar(text[i]);
	return (0);
}

