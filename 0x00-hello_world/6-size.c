#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : size of various types
 */

int main(void)
{
	int intType;
	char charType;
	float floatType;
	long longInt;
	long long llInt;
	printf("Size of a char: %zu byte\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longInt));
	printf("Size of a long long int: %zu bytes\n", sizeof(llInt));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}
