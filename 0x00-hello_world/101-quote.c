#include <stdio.h>
#include <unistd.h>
/**
 * main-prints a line of code to the std error without using printf and puts
 *
 * Return: 1
*/
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
