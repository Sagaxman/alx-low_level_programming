#include <stdio.h>

/**
 * main - is a special function that serves as the entry point for the program
 *
 * Return: always (0)
 */

int main(void)
{
	printf("Size of a char: %lu\n byte(s)", sizeof(char));
	printf("Size of init: %lu\n byte(s)", sizeof(int));
	printf("Size of a long int: %lu\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu\n byte(s)", sizeof(long long int));
	printf("Size of float: %lu\n byte(s)", sizeof(float));
	return (0);
}
