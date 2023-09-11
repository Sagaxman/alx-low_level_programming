#include <stdio.h>

/**
 * The main function is the entry point of the program.
 * It prints the combination of numbers from 0 to 9.
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
