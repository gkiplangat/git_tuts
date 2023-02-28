#include <stdio.h>
int main(void)
{
	int n = 98;
	int *p = &n;
	printf("%d\n", n); /*the value of variable n*/
	printf("%p\n", p); /*the address of variable n*/
	printf("%p\n", &p); /* the address of pointer p */
	return (0);
}

