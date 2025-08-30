# include "main.h"
/**
* print_last_digit - iojiotj
*
*@a: jhirjh
*Return: hgiehh
*/
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
