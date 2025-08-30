#include "main.h"
/**
 * is_prime_number - check the code
 *
 *@n: kljhrj
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (b(n, 2));
}
/**
  * b - ihughu
  *
  *@n: ij
  *@i: nhuu
  *Return: hiuhhh
  */
int b(int n, int i)
{
	if (i != n / 2 + 1)
	{
		if (n % i == 0)
			return (0);
		b(n, i + 1);
	}
	return (1);
}
