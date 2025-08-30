#include "main.h"
/**
* print_number - check the code
*
*@n: jghhr
*/
void print_number(int n)
{
	int k, j, s, i, l = 1, r = 0;

	j = n;
	if (n < 0)
	{
		_putchar('-');
		n = s = k = n * -1;
	}
	s = k = n;
	if (j == 2147483647 || j == -2147483648) /* D */
	{
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		if (n == 2147483647)
			_putchar('7');
		else
			_putchar('8');
	} else
	{
	while (k >= 10)
	{
		k /= 10;
		r++;
		l *= 10;
	}
	for (i = 0; i < r; i++)
	{
		n = (s / l) % 10;
		_putchar(n + '0');
		l /= 10;
	}
	_putchar(s % 10 + '0');
	}
}
