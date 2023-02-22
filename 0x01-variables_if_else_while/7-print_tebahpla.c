#include <stdio.h>
/**
 * main-prints the lowercase alphabet in reverse using putchar only
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char eww;

	for (eww = 'z'; eww >= 'a'; eww--)
	putchar(eww);
	putchar('\n');
	return (0);
}
