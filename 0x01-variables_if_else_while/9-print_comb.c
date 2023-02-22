#include <stdio.h>
/**
 * main-prints all possible combinations of single-digit numbers
 * use putchar only,numbers must be separated by comma
 * Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	if (c != '9')
	{
	putchar(',');
	putchat(' '');
	}
	}
	return (0);
}
