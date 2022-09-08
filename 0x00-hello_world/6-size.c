#include <stdio.h>
/**
 * main - Prints sizes of various types on the computer compiled and run on
 *
 * Return: 0
 */
int main(void)
{
	int intType;
	long int longType;
	long long int longLongType;
	char charType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongType));
	printf("Size of a float : %zu byte(s)\n", sizeof(floatType));
	return (0);
}
