#include <stdio.h>

/**
 * modify_my_char_var - solve
 * @cc: pointers
 * @ccc: new variable
 * Return:Always 0
 */

void modify_my_char_var(char *cc, char ccc)
{
	printf("The value of ccc is:%d\n", ccc);
	printf("The value of *cc: %p\n", cc);
	*cc = 'o';
	ccc = 'l';
	printf("The value of ccc is:%d\n", ccc);
}

/**
 * main -entry point
 * Return:0
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("The value of c is: %d('%c')\n", c, c);
	printf("The address of c is: %p\n", &c);
	printf("The value of p is: %p\n", p);
	modify_my_char_var(p, c);
	printf("The value of c is:%d\n", c);
	return (0);
}
