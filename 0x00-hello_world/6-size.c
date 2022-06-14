#include<stdio.h>
/**
 * main - Entry point
 * Description 'A C program that prints the sizes of various variables'
 * Return: Always 0(success)
*/
#include<string.h>

int main(void)
{
	/**
	 * new
	 * A project designed for people to know about variable sizes
	*/
	char ch = ' ';
	int int_num = 0;
	float flt_num = 0.00f;
	long int lng_int = 0;
	long long int lnglng_int = 0;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
