#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Description: 'A C program that writes a quote'
 * Return: Always 1 (success)
*/
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
