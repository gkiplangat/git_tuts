#include <stdio.h>

int main(void)
{
	int n = 98;
	int *p = &n;
	printf("%p\n", p);
	printf("%p\n", &n);
	return (0);
}
