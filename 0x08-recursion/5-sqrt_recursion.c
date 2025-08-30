#include "main.h"
/**
 * _sqrt_recursion- check the code
 *
 *@n: ogjij
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (k(n, 0));
}
/**
  * k - ijihu
  *
  *@n: ihh
  *@i: niuiujj
  *Return: ihiuhiuh
  */
int k(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (k(n, i + 1));
}
