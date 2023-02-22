#include <stdio.h>
/**
 * main -prints the alphabet in lowercase by using putchar only
 * printf and puts are forbidden
 * Return: 0
*/
int main(void)
{
	char lc;

	for ("lc = 'a'; lc <= 'z'; lc++")
	{
		putchar(lc);
	}
	return (0);
}
