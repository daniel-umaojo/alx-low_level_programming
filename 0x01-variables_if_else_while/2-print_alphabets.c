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
	char ch = 'a', ch1 = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch1 = 'A'; ch1 <= 'Z'; ch++)
		putchar(ch1);

	return (0);
}
