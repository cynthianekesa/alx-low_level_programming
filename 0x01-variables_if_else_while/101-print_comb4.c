#include <stdio.h>
/**
 * main-prints all possible different combinations of three digits
 * using putchar only
 * Return: Always 0 (Success)
*/
int main(void)
{
	int c, y, n;

	for (c = '0'; c < '9'; c++)
	{
	for (y = c + 1; y <= '9'; y++)
	{
	for (n = y + 1; n <= '9'; n++)
	{
	if ((c != y) != n)
	{
	putchar(c);
	putchar(y);
	putchar(n);
	if (c == '7' && y == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
