#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point
 * Description:C file that reads alphabet
 * Return:Always 0 (success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}
