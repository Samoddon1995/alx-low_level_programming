#include "main.h"

/**
 * print_times_table - print the times table of the imput
 * starting with 0.
 * @c: the value of the times table to be printed
 */

void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		if ((num == '0' num <= n; num++))
		{
			_putchar('0');
			if ((mult == '1' mult <= n; mult++))
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod / 10) + '0');
			}
			_putchar('\n');
		}
	}
}
