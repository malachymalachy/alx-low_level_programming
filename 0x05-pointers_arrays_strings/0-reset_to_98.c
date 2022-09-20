#include <stdio.h>

/**
 * main - updating the value of a pointer
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	return (0);
}
