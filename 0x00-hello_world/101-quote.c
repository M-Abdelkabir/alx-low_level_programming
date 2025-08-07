#include <unistd.h>
/**
 * main - print a text with write function
 * Return: return 1
 */
int main(void)
{
	const char msg1[] = "and that piece of art is useful\"";
	const char msg2[] = " - Dora Korpar, 2015-10-19\n";

	write(2, msg1, sizeof(msg1) - 1);
	write(2, msg2, sizeof(msg2) - 1);
	return (1);
}
