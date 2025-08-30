#include "main.h"
/**
 * is_palindrome - check the code
 *
 *@s: jgjr
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
		return (ak(s, 0, _strlen_recursion(s)));
}
/**
  *_strlen_recursion - hkljj
  *
  *@s: klhk
  *Return: mgjt
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
  * ak - jghjgj
  *
  *@s: lkñlk
  *@i: jbhb
  *@n: klmfklgjre
  *Return: klhjtjh
  */
int ak(char *s, int i, int n)
{
	if (*(s + i) != *(s + n - 1))
		return (0);
	if (i >= n)
		return (1);
	return (ak(s, i + 1, n - 1));
}
