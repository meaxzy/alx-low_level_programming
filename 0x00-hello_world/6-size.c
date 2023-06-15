#include <stdio>
/**
 * main- A program that prints the size of various types on the computer
 * Return: 0 always
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char:%lu bytes\n", sizeof(a));
printf("Size of an int:%lu bytes\n", sizeof(b));
printf("Size of a long int:%lu bytes\n", sizeof(c));
printf("Size of a long long int:%lu bytes\n", sizeof(d));
printf("Size of a float:%lu bytes\n", sizeof(f));
return (0);
}
