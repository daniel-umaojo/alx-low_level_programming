#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * Description: Printing combinations with spaces
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++n;
	}
	putchar('\n');
	return (0);
}
