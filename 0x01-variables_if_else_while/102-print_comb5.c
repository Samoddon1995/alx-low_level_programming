#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: prints all possible combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	int c2;
	int f_d2;
	int l_d2;

	while (c <= 98)
	{
		f_d2 = (c / 10 + '0');
		l_d2 = (c / 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			f_d2 = (c2 / 10 + '0');
			l_d2 = (c2 / 10 + '0');

			if (c < c2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('-');
	return (0);
}
