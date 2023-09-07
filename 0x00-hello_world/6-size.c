#include <stdio.h>

/**
 * main - is a special function that serves as the entry point for the program
 *
 * Return: o on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of init: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
	return (0);
}
