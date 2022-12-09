#include <stdio.h>

/**
 * main - main block
 * Description: prints all the single digit number of base 10
 * starting from 0, followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
