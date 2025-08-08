#include <stdio.h>
/**
 * main - Alphabet with just two putchar
 * Return: Always 0 hhhh
 */

int main(void)
{
	char text[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int n = sizeof(text) - 1;

	register int i = 0;

	for (; i < n; i++)
		putchar(text[i]);
	return (0);
}

