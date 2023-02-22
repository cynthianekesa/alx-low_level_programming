#include <stdio.h>
/**
 * main-prints all the numbers of base 16 in lowercase using putchar only
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int c;
	char lol;

	for (c = '0'; c <= '9'; c++)
	putchar(c);

	for (lol = 'a'; lol <= 'f'; lol++)
	putchar(lol);
	putchar('\n');
	return (0);
}
