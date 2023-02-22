#include <stdio.h>
/**
 * main -prints the alphabet in lower case except q and e
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char eww, e, q;

	e = 'e';
	q = 'q';

	for (eww = 'a'; eww <= 'z'; eww++)
	{.
	if (eww != e && eww != q
	putchar(eww);
	}
	putchar('\n');
	return (0);
}
