#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	/**
	 * Declare a variable
	 * array containing 5 values
	 */
	int nums[5];

	/**
	 * Initialize each index of the array with a value
	 */
	nums[0] = 10;
	nums[1] = 20;
	nums[2] = 30;
	nums[3] = 40;
	nums[4] = 50;

	/**
	 * print out the values of each index on the screen
	 */
	printf("The value of nums[0]:%d\n", nums[0]);
	printf("The value of nums[1]:%d\n", nums[1]);
	printf("The value of nums[2]:%d\n", nums[2]);
	printf("The value of nums[3]:%d\n", nums[3]);
	printf("The value of nums[4]:%d\n", nums[4]);

	/**
	 * print out the address of each index on the screen
	 */
	printf("The address of nums[0]:%p\n", &nums[0]);
	printf("The address of nums[1]:%p\n", &nums[1]);
	printf("The address of nums[2]:%p\n", &nums[2]);
	printf("The address of nums[3]:%p\n", &nums[3]);
	printf("The address of nums[4]:%p\n", &nums[4]);

	return (0);
}
