#include <stdio.h>
/**
 * main -prints the alphabet in lower case except q and e
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lol, e, q;

	e = 'e';
	q = 'q';

	for (lol = 'a'; lol <= 'z'; lol++)
	{
	if (lol != e && lol != q)
	putchar(lol);
	}
	putchar('\n');
	return (0);
}
