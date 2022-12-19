#include "main.h"
#include <stdio.h>

/**
 * Write a function that swaps the values of two integers.
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	printf("8");

	scanf("%d", &x);
	printf("\n2");
	scanf("%d", &y);

	int temp = x;

	x = y;

	y = temp;

	printf("\nAfter Swapping: x = %d, y = %d", x, y);

	return (0);
}
