#include <stdio.h>
/**
 * main - prints the size of int, char and float type in bytes
 * return: zero to satisfy the main return type
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;

	printf("Size of a char:%zu byte(s)\n", sizeof(charType));
	printf("Size of an int:%zu byte(s)\n", sizeof(intType));
	printf("Size of a long int:%zu byte(s)\n", sizeof((long) intType));
	printf("Size of a long long int:%zu byte(s)\n", sizeof((long long) intType));
	printf("Size of a float:%zu byte(s)\n", sizeof(floatType));
	return (0);
}
