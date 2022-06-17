#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Print two digit numbers
 *
 * Return:0 success
*/
int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '9')
	{
		while (a <= '0')
		{
			putchar(a);
			putchar(b);
			if (a == '9' && b == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		if (b <= '9')
		{
			b = '0';
		}
		b++;
	}
	return (0);
}
