#include "main.h"

/**
 * swap_int - this swaps two parameter
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}

