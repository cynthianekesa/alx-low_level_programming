#include <stdio.h>
/**
 * main -prints the alphabet in lowercase, and then in uppercase
 * using putchar thrice only
 * Return: 0
*/
int main(void)
{
	char cy;

	for (cy = 'a'; cy <= 'z'; cy++)
	putchar(cy);

	for (cy = 'A'; cy <= 'Z'; cy++)
	putchar(cy);

	putchar('\n')
	return (0);
}
