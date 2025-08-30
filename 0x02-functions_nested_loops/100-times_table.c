#include "main.h"
/**
*print_times_table - jhgehihg
*
*@n: ogio
*Return: jdfhbuiehh
*/
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d", i * j);
				if (j != n)
				{
					k = i * j + i;
					if (k / 100 > 0)
						printf(", ");
					else if (k / 10 > 0)
						printf(",  ");
					else
						printf(",   ");
				}
			}
			putchar('\n');
		}
	}
}
