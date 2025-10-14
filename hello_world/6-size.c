#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: " sizeof(i));
	printf("Size of an int: " sizeof(j));
	printf("Size of an long int: " sizeof(k));
	printf("Size of an long long int: " sizeof(l));
	printf("Size of an float: " sizeof(m));

	return (0);
}
