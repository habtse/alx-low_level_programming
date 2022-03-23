#include "main.h"

/**
 * _isdigit - check the input whether it is digit
 * @c: int parameter
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c < 58 && c > 46)
	{
		return (1);
	}

	return (0);
}

