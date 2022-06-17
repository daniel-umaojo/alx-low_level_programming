#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * Description: 'New project that outputs hexadecimal numbers'
 * Return: Always 0 (success)
*/
int main(void)
{
	char c;
	char d;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
