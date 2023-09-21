#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s num1 num2\n", argv[0]);
        return 1;
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];

    // Convert the input strings to integers
    int num1 = atoi(num1_str);
    int num2 = atoi(num2_str);

    // Calculate the sum
    int sum = num1 + num2;

    // Print the result
    printf("%d\n", sum);

    return 0;
}
