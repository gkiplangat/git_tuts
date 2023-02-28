#include <stdio.h>

/**
 * main - Entry point of this program
 * Return: Always 0
 */

int main(void)
{
	/*
	 * Declare a, b, and pointer variables
	 */
	int a = 10;
	int b = 20;
	int *pointer;

	/*
	 *  initialize value into pointer variable
	 */
	pointer = &a;

	printf("The value of variable a is: %d\n", a);
	printf("The address of variable a is: %p\n", pointer);

	/*
	 * change the content of the pointer variable
	 */
	pointer = &b;

	printf("The value of variable b is: %d\n", b);
	printf("The address of variable b is:  %p\n", pointer);

	return (0);
}
