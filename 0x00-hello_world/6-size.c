#include <stdio.h>

/**
 *main - Entry point
 *size of various types on the computer it is compiled and run on
 *Return: 0 (success)
 */
int main(void)
{
	char charType;
	int intType;
	long int lintType;
	long long int llintType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf('Size of an int: %zu byte(s)\n', sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
