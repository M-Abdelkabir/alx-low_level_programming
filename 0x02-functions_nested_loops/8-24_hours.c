#include "main.h"
/**
*jack_bauer - jntkjgr
*
*@void: fvjfj
*Return: ykktj
*/
void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			m++;
			_putchar('\n');
		}
		h++;
	}
}
