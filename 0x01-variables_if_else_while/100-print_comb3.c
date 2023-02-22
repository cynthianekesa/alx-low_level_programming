#include <stdio.h>
/**
 * main-prints all possible different combinations of two digits
 * using putchar only
 * Return: Always 0 (Success)
*/
int main(void)
{
	int c, y;

	for (c = '0'; c < '9'; c++)
	{
	for (y = c + 1; y <= '9'; y++)
	{
	if (c != y)
	{
	putchar(c);
	putchar(y);
	if (c == '8' && y == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
